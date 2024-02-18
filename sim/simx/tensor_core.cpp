#include "tensor_core.h"
#include "pipeline.h"
#include "core.h"


PEGroup::PEGroup(size_t num_pes,size_t operands_count,size_t input_mat_buf_depth, size_t acc_buf_rows, size_t acc_buf_cols, size_t output_fifo_size, size_t num_acc_tiles) :
    m_mat_a(num_pes * operands_count, input_mat_buf_depth),
    m_mat_b(operands_count*num_pes, input_mat_buf_depth),
    m_mat_c(operands_count*num_pes/2, input_mat_buf_depth), // /2 because acc is uin32_t
    m_tile_accumulator(acc_buf_rows,acc_buf_cols, num_acc_tiles, num_pes) ,
    m_output_fifo( output_fifo_size),
    m_num_pes(num_pes)
{

}

void PEGroup::loadMatA(const std::vector<uint16_t>& data){
    for (auto& e: data)
        m_mat_a.insert(e);
    updateRdyToFire();
}

void PEGroup::loadMatB( const std::vector<uint16_t>& data){
    for (auto& e: data)
        m_mat_b.insert(e);
    updateRdyToFire();
}

void PEGroup::loadAccBuf(const std::vector<uint32_t>& data) {
    for (auto& e: data)
        m_mat_c.insert(e);
    updateRdyToFire();
}
void PEGroup::insertOutput(size_t pe_id, uint16_t reg, uint32_t val){
    m_output_fifo[pe_id].push(std::make_pair(reg, val));
}
std::pair<uint16_t, uint32_t> PEGroup::popOutput(size_t pe_id){
    return m_output_fifo[pe_id].pop();
}
void PEGroup::popOperands() {
    m_mat_a.pop();
    m_mat_b.pop();
    m_mat_c.pop();
    updateRdyToFire();
}

void PEGroup::setAccMat(size_t row, size_t col, uint32_t data){
    m_tile_accumulator.setData(row, col, data);
}

uint32_t PEGroup::getAccMat(size_t row, size_t col) {
    return m_tile_accumulator.getData(row, col);
}


TensorCore::TensorCore(const SimContext& ctx, vortex::Core* core, Config_t config) : vortex::ExeUnit(ctx,core,  "TensorCore"), m_config(config) {
    // initialize the PE Groups
    for (size_t i = 0; i < config.num_pe_groups; i++)
        m_pe_groups.push_back(PEGroup(config.num_pes, config.operand_count, config.input_mat_buf_depth, config.acc_buf_rows, config.acc_buf_cols, config.output_fifo_size, config.num_acc_tiles));
}

void TensorCore::tick() {
    // FOR NOW I ASSUME PARALLEL LOADING (all pe groups are loaded at same time so only need to look at 1 group) (assumption 1)
    // Ensure all threads are synchronized before doing MMA instruction



    for (uint32_t i = 0; i < ISSUE_WIDTH; ++i) {
        // Handle inputs
        bool recieved_input = false;
        auto& input= Inputs.at(i) ; // retire trace

        bool space_to_accept = true;
        for (size_t i = 0 ; i < m_pe_groups.size(); i++) {
            space_to_accept &= m_pe_groups[i].spaceToAccept();
        }
        [[unlikely]]
        if (!input.empty() && !recieved_input && space_to_accept) { // and there is space in buffers
            recieved_input = true;
            vortex::pipeline_trace_t* trace = input.front();
            input.pop();
            // Load Inputs (assumption 1 in play)
            auto& warp = core_->warps_[trace->wid]; // can't handle multiple independent data streams for now (per row in matrix buffers can add warp tag) (also independent matrix tile buffers)

            #ifdef DEBUG
            // sync check call per thread
            for (auto i = 0 ; i < MAX_NUM_THREADS; i++ ) {
                if (!tmask[i]) {
                    if (i != MAX_NUM_THREADS-1) {
                        throw std::runtime_error("Threads not synchronized");
                    }
                }
            }
            #endif

            for (auto t = 0 ; t < trace->tmask.count() ; t++) {
                std::pair<uint16_t, uint16_t> A;  // can only load 2 operands of A at a time
                std::pair<uint16_t, uint16_t> B;  // can only load 2 operands of B at a time
                uint32_t c ;
                // find first N(=2) operands of A and B and possible c depending on type
                int a_index = -1 ;
                for (auto i = 0 ; i < MAX_NUM_REGS; i++) {
                    if (trace->used_fregs[i]) {
                        a_index = i ;
                        break;
                    }
                }
                #ifdef DEBUG
                if (a_index == -1) {
                    throw std::runtime_error("No operands found");
                }
                if (a_index >= MAX_NUM_REGS-1) {
                    throw std::runtime_error("Invalid register index for a operand");
                }
                #endif

                int b_index = -1;
                for (auto i = a_index+1; i < MAX_NUM_REGS; i++) {
                    if (trace->used_fregs[i]) {
                        b_index = i ;
                        break;
                    }
                }

                int c_index = -1 ;
                c = 0 ;
                if (trace->tc_type == vortex::TCOpType::WITH_ACC) {
                    [[likely]]
                    if (b_index != MAX_NUM_REGS-1) {
                        // fetch from mat tile accumulator
                        for (auto i = b_index+1; i < MAX_NUM_REGS; i++) {
                            if (trace->used_fregs[i]) {
                                c_index = i ;
                                break;
                            }
                        }
                    }
                    if (c_index == -1) {
                        // use mat accumulate buffer
                        auto row = 0;
                        auto col = 1 ;
                        c = m_pe_groups[t % m_pe_groups.size()].getAccMat(row, col);
                    } else {
                        c = warp->freg_file_.at(t)[c_index];

                    }
                }
                A.first = warp->freg_file_.at(t)[a_index];
                A.second = warp->freg_file_.at(t)[a_index+1];

                B.first = warp->freg_file_.at(t)[b_index];
                B.second = warp->freg_file_.at(t)[b_index+1];

                m_pe_groups[t % m_pe_groups.size()].loadMatA(A.first);
                m_pe_groups[t % m_pe_groups.size()].loadMatA(A.second);

                m_pe_groups[t % m_pe_groups.size()].loadMatB(B.first);
                m_pe_groups[t % m_pe_groups.size()].loadMatB(B.second);

                m_pe_groups[t % m_pe_groups.size()].loadAccBuf(c);


                }
            }


            // accept
        }
        // If there is space in input buffer load them in

        // Computer and queue to output fifo

        // (drain out queue)
}


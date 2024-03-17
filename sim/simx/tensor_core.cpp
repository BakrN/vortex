#include "tensor_core.h"
#include "pipeline.h"
#include "core.h"
#include "types.h"
#include <limits>
#include <cmath>

struct float16 {
  unsigned short sign : 1;
  unsigned short exponent : 5;
  unsigned short mantissa : 10;

  // Implicit conversion from uint16_t for reinterpret casting
  float16(uint16_t value) {
    // Extract sign, exponent, and mantissa from the uint16_t representation
    sign = (value >> 15) & 1;
    exponent = (value >> 10) & 0x1F;
    mantissa = value & 0x3FF;
  }
  float to_float32() const {
    float sign_float = sign ? -1.0f : 1.0f;  // Set sign as float

    // Combine exponent with bias (127 for float32)
    int adjusted_exponent = exponent + 127;

    // Handle special cases (optional)
    if (adjusted_exponent == 31) {  // Check for infinity or NaN
      return (mantissa == 0) ? (sign_float * std::numeric_limits<float>::infinity()) : std::numeric_limits<float>::quiet_NaN();
    } else if (adjusted_exponent == 0) {  // Check for denormals (underflow)
      // Handle denormal case (e.g., set to 0.0f)
      return 0.0f;
    }

    // Calculate base of the exponent (2 raised to the power of adjusted_exponent)
    float base = std::pow(2.0f, adjusted_exponent - 127);

    // Combine sign, base, and mantissa with hidden bit (implicit 1.0)
    float mantissa_float = (1.0f + (float(mantissa) / 1024.0f)) * base;

    return sign_float * mantissa_float;
  }
};

float uint32_to_float32(uint32_t value) {
  // Extract sign bit
  unsigned int sign = value >> 31;

  // Extract exponent with bias (127 for float32)
  int exponent = ((value >> 23) & 0xFF) - 127;

  // Extract mantissa
  unsigned int mantissa = value & 0x7FFFFF;

  // Handle special cases (optional)
  if (exponent == -127) {
    if (mantissa == 0) {
      return sign ? -0.0f : 0.0f;  // Zero
    } else {
      return sign ? -std::numeric_limits<float>::infinity() : std::numeric_limits<float>::infinity();  // Infinity
    }
  } else if (exponent == 128) {
    return sign ? -std::numeric_limits<float>::quiet_NaN() : std::numeric_limits<float>::quiet_NaN();  // NaN
  }

  // Combine sign, exponent, and mantissa
  float float_value = sign ? -1.0f : 1.0f;
  float_value *= std::ldexp(1.0f, exponent);  // Efficient way to calculate 2 raised to the power of exponent
  float_value *= (1.0f + (float(mantissa) / (float)(1 << 23)));  // Add hidden bit and scale mantissa

  return float_value;
}

uint32_t float32_to_uint32(float value) {
  // Handle special cases (optional)
  if (std::isnan(value)) {
    return 0x7FC00000;  // Quiet NaN representation
  } else if (value == std::numeric_limits<float>::infinity()) {
    return (value < 0.0f) ? 0xFF800000 : 0x7F800000;  // Positive/Negative Infinity representation
  } else if (value == -0.0f) {
    return 0x80000000;  // Negative zero representation
  } else if (value == 0.0f) {
    return 0x00000000;  // Positive zero representation
  }

  // Handle positive/negative sign
  unsigned int sign = (value < 0.0f) ? 1 : 0;
  value = std::abs(value);

  // Extract integer part (biased exponent calculation)
  int exponent = std::ilogbf(value) + 127;  // Efficiently get exponent using std::ilogbf

  // Handle overflow/underflow (optional)
  if (exponent > 128) {
    exponent = 128;  // Clamp to maximum exponent (positive infinity)
  } else if (exponent < -127) {
    exponent = -127;  // Clamp to minimum exponent (zero)
  }

  // Extract mantissa (handle hidden bit)
  float mantissa_float = value * std::ldexp(1.0f, -exponent);  // Efficiently scale down
  mantissa_float -= 1.0f;  // Remove hidden bit

  // Combine sign, exponent, and mantissa
  uint32_t mantissa = static_cast<uint32_t>(mantissa_float * (1 << 23));  // Scale and convert to int
  return (sign << 31) | ((exponent + 127) << 23) | mantissa;
}

PEGroup::PEGroup(size_t num_pes,size_t operands_count,size_t input_mat_buf_depth, size_t acc_buf_rows, size_t acc_buf_cols, size_t output_fifo_size, size_t num_acc_tiles)  :
    m_mat_a(num_pes * operands_count, input_mat_buf_depth),
    m_mat_b(operands_count*num_pes, input_mat_buf_depth),
    m_mat_c(num_pes, input_mat_buf_depth) , // Due to stepping mechanism, load num_pes per group
    m_tile_accumulator(acc_buf_rows,acc_buf_cols, num_acc_tiles),
    m_num_pes(num_pes)
{
    for (size_t i = 0; i < num_pes; i++) {
        m_output_fifo.emplace_back(FIFO<std::tuple<uint32_t, uint16_t, uint32_t>>(output_fifo_size));
    }
}

void PEGroup::loadMatA(const std::vector<uint16_t>& data){
    for (auto& e: data)
        m_mat_a.insert(e);
}

void PEGroup::loadMatA(uint16_t e){
    m_mat_a.insert(e);
}


void PEGroup::loadMatB( const std::vector<uint16_t>& data){
    for (auto& e: data)
        m_mat_b.insert(e);
}

void PEGroup::loadMatB(uint16_t e){
    m_mat_b.insert(e);
}

void PEGroup::loadAccBuf(const std::vector<uint32_t>& data) {
    for (auto& e: data)
        m_mat_c.insert(e);
}

void PEGroup::loadAccBuf(uint32_t e){
    m_mat_c.insert(e);
}

void PEGroup::insertOutput(size_t pe_id,uint32_t warp_id,  uint16_t reg, uint32_t val){
    m_output_fifo[pe_id].push(std::make_tuple(warp_id,reg, val));
}
std::tuple<uint32_t , uint16_t, uint32_t> PEGroup::popOutput(size_t pe_id){
    return m_output_fifo[pe_id].pop();
}
void PEGroup::popOperands() {
    m_mat_a.popRow();
    m_mat_b.popRow();
    m_mat_c.popRow();
    m_cur_step = 0 ;
}

void PEGroup::setAccMat(size_t row, size_t col, uint32_t data){
    m_tile_accumulator.setData(row, col, data);
}

uint32_t PEGroup::getAccMat(size_t row, size_t col) {
    return m_tile_accumulator.getData(row, col);
}

PEGroup::~PEGroup() {

}

TensorCore::TensorCore(const SimContext& ctx, vortex::Core* core, Config_t config) : vortex::ExeUnit(ctx,core,  "TensorCore"), m_config(config) {
    m_config.print();
    // initialize the PE Groups
    for (size_t i = 0; i < config.num_pe_groups; i++) {
        PEGroup grp(config.num_pes, config.operand_count, config.input_mat_buf_depth, config.acc_buf_rows, config.acc_buf_cols, config.output_fifo_size, config.num_acc_tiles);
        m_pe_groups.emplace_back(grp);
    }
}

void TensorCore::handleInput(){
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

            for (size_t t = 0 ; t < trace->tmask.count() ; t++) {
                std::pair<uint16_t, uint16_t> A;  // can only load 2 operands of A at a time
                std::pair<uint16_t, uint16_t> B;  // can only load 2 operands of B at a time
                uint32_t c ;
                auto grp = t % m_pe_groups.size();
                // find first N(=2) operands of A and B and possible c depending on type

                c = 0 ;
                if (trace->tc_type != vortex::TCOpType::NO_ACC) {
                    [[likely]]
                    if (trace->tc_type == vortex::TCOpType::ACC_REG) {
                        c = warp->freg_file_.at(t)[trace->rsrc3];
                        // fetch from mat tile accumulator
                    }
                    else  {
                        // use mat accumulate buffer
                        // fetch from accumulate buffer
                        auto row = 0; // row is dependent on tid
                        auto col = trace->rsrc3;
                        c = m_pe_groups[grp].getAccMat(row, col);
                    }
                }

                uint32_t a_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc1];
                uint32_t b_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc2];

                A.first = (a_val & 0xFFFF0000) >> 16;
                A.second = a_val & 0xFFFF ;

                B.first = (b_val & 0xFFFF0000) >> 16;
                B.second = b_val & 0xFFFF ;

                if (m_pe_groups[grp].mata().isBackFull()){
                    MATMetadata meta;
                    meta.wb = trace->wb;
                    meta.warp_id = trace->wid;
                    meta.rd = trace->rdest;
                    m_pe_groups[grp].mata().allocateRow(meta);
                }

                if (m_pe_groups[grp].matb().isBackFull()){
                    MATMetadata meta;
                    meta.wb = trace->wb;
                    meta.warp_id = trace->wid;
                    meta.rd = trace->rdest;
                    m_pe_groups[grp].matb().allocateRow(meta);
                }

                if (m_pe_groups[grp].matc().isBackFull()){
                    MATMetadata meta;
                    meta.wb = trace->wb;
                    meta.warp_id = trace->wid;
                    meta.rd = trace->rdest;
                    m_pe_groups[grp].matc().allocateRow(meta);
                }

                m_pe_groups[grp].loadMatA(A.first);
                m_pe_groups[grp].loadMatA(A.second);

                m_pe_groups[grp].loadMatB(B.first);
                m_pe_groups[grp].loadMatB(B.second);

                m_pe_groups[grp].loadAccBuf(c);
                }
                // queue up trace if it fills up row and wb
                // Only valid with parallel loading
                bool add_trace = true;
                for (size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
                    if (!(m_pe_groups[grp].mata().isBackFull() && m_pe_groups[grp].matb().isBackFull() && m_pe_groups[grp].matc().isBackFull())) {
                        add_trace = false;
                        break;
                    }
                }
                if (add_trace) {
                    m_traces.push(trace);
                }
            }
            // accept
        }



}

void TensorCore::compute(){
    for(size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
        if (m_pe_groups[grp].matb().isTopFull() && m_pe_groups[grp].getStep() == m_config.num_pes){
            m_pe_groups[grp].popOperands();
            continue;
        }
        if (m_pe_groups[grp].isReadyToFire()){ // let's assume i always write back for now
            MATMetadata meta = m_pe_groups[grp].matb().frontMeta();
            for (size_t pe = 0 ; pe < m_pe_groups[grp].getNumPEs(); pe++) {
                // calculate all results
                // step and pop
                auto& A = m_pe_groups[grp].mata().frontRow();
                auto& B = m_pe_groups[grp].matb().frontRow();
                auto& C = m_pe_groups[grp].matc().frontRow();

                // Compute inner product (uint)
                //uint32_t result = std::inner_product(A.begin()+pe*m_config.operand_count, A.begin()+(pe+1)*m_config.operand_count, B.begin()+pe*m_config.operand_count, 0);
                //result += C[pe];
                // Float

                // reinterpret cast A, B as float 16
                float int_result = 0 ;
                for(size_t i = 0 ; i < m_config.operand_count; i++) {
                    float16 _a(A[i]);
                    float16 _b(B[i]);
                    float a = _a.to_float32();
                    float b = _b.to_float32();

                    int_result += a*b;
                }
                float C_f = uint32_to_float32(C[(pe + m_pe_groups[grp].getStep()) % m_config.num_pes]);
                int_result += C_f;
                uint32_t result = float32_to_uint32(int_result);
                // queue
                m_timing.push({m_cycle+m_config.execution_latency+1, {meta, result, {grp, pe}}});
            }

            if(meta.wb) { // reserve in queue
                m_pe_groups[grp].reserveOutput();
            }
            m_pe_groups[grp].step();
        }
    }
}

void TensorCore::queueToOutput(){
    while(!m_timing.empty()){

        auto& e = m_timing.front();
        if (e.first == m_cycle) {
            auto& [meta, result, pe_id] = e.second;
            auto& [grp, pe] = pe_id;

            m_pe_groups[grp].insertOutput(pe, meta.warp_id, meta.rd, result);
            m_timing.pop();
        }else {
            break;
        }
    }
}

void TensorCore::drainOutQueue(){
    // need a better way to propagate backpressure at the output (or not?)
    // write result in register

    // writeback results
    bool commit = false;
    for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
        for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
            if(!m_pe_groups[grp].getOutputFIFO(pe).isEmpty()) {
                auto [warp_id, reg, val] = m_pe_groups[grp].popOutput(pe);
                auto& warp = core_->warps_[warp_id];
                warp->freg_file_.at(pe)[reg] = val;
                commit = true;
            }
        }
    }
    // send to output & retire trace
    if (commit) {
        vortex::pipeline_trace_t* trace = m_traces.front();
        m_traces.pop();
        Outputs.at(0).send(trace,1 );
    }
}

void TensorCore::tick() {
    // FOR NOW I ASSUME PARALLEL LOADING (all pe groups are loaded at same time so only need to look at 1 group) (assumption 1)
    // Ensure all threads are synchronized before doing MMA instruction

    drainOutQueue();
    queueToOutput();
    compute();
    handleInput();

    m_cycle+= 1;

}


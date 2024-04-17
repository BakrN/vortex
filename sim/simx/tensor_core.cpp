#include "tensor_core.h"
#include "VX_config.h"
#include "pipeline.h"
#include "core.h"
#include "tc_helper.h"
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
      uint32_t sign = this->sign;
      uint32_t exponent = this->exponent;
      uint32_t fraction = this->mantissa;
      uint32_t float32_value;
      if (exponent == 0)
      {
          if (fraction == 0)
          {
              // zero
              float32_value = (sign << 31);
          }
          else
          {
              // can be represented as ordinary value in float32
              // 2 ** -14 * 0.0101
              // => 2 ** -16 * 1.0100
              // int int_exponent = -14;
              exponent = 127 - 14;
              while ((fraction & (1 << 10)) == 0)
              {
                  //int_exponent--;
                  exponent--;
                  fraction <<= 1;
              }
              fraction &= 0x3FF;
              // int_exponent += 127;
              float32_value = (sign << 31) | (exponent << 23) | (fraction << 13);
          }
      }
      else if (exponent == 0x1F)
      {
          /* Inf or NaN */
          float32_value = (sign << 31) | (0xFF << 23) | (fraction << 13);
      }
      else
      {
          /* ordinary number */
          float32_value = (sign << 31) | ((exponent + (127-15)) << 23) | (fraction << 13);
      }

      return *((float*)&float32_value);

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
    m_tile_accumulator(acc_buf_rows,acc_buf_cols, num_acc_tiles),
    m_num_pes(num_pes)
{
    for (int i = 0 ; i < MAX_NUM_WARPS; i++) {
        m_mat_a[i] = MATBuffer<uint16_t>(operands_count, input_mat_buf_depth, num_pes);
        m_mat_b[i] = MATBuffer<uint16_t>(operands_count, input_mat_buf_depth, num_pes);
        m_mat_c[i] = MATBuffer<uint32_t>(num_pes, input_mat_buf_depth,num_pes);
        m_cur_step[i] = 0;
    }
    for (size_t i = 0; i < num_pes; i++) {
        m_output_fifo.emplace_back(FIFO<std::pair<MATMetadata, uint32_t>>(output_fifo_size));
    }
}

void PEGroup::insertOutput(size_t pe_id, MATMetadata meta, uint32_t val){
    m_output_fifo[pe_id].push(std::make_pair(meta, val));
}
std::pair<MATMetadata, uint32_t> PEGroup::popOutput(size_t pe_id){
    return m_output_fifo[pe_id].pop();
}
void PEGroup::popOperands(int wid) {
    m_mat_a[wid].popRow();
    m_mat_b[wid].popRow();
    m_mat_c[wid].popRow();
    m_cur_step[wid] = 0 ;
}

void PEGroup::setAccMat(size_t row, size_t col, uint32_t data){
    m_tile_accumulator.setData(row, col, data);
}

uint32_t PEGroup::getAccMat(size_t row, size_t col) {
    return m_tile_accumulator.getData(row, col);
}

PEGroup::~PEGroup() {

}

TensorCore::TensorCore(const SimContext& ctx, vortex::Core* core, Config_t config) : vortex::ExeUnit(ctx,core,  "TensorCore"),  m_config(config) {
    m_config.print();
    // initialize the PE Groups
    for (size_t i = 0; i < config.num_pe_groups; i++) {
        PEGroup grp(config.num_pes, config.operand_count, config.input_mat_buf_depth, config.acc_buf_rows, config.acc_buf_cols, config.output_fifo_size, config.num_acc_tiles);
        m_pe_groups.emplace_back(grp);
    }
}

bool TensorCore::isBusy() {
    bool busy = false;
    for (int i = 0 ; i < ISSUE_WIDTH; i++) {
        busy |= !Inputs.at(i).empty();
        busy |= !Outputs.at(i).empty();
    }
    // all other queues in here are empty
    busy |= !m_timing.empty();

    // only need to check 1 pe group
    for (int i = 0 ; i < MAX_NUM_WARPS;i++)
        busy |= !m_pe_groups[0].mata(i).isEmpty();
    busy |= !m_pe_groups[0].getOutputFIFO(0).isEmpty();

    // Print all conditions here:

    return busy;
}

vortex::pipeline_trace_t* TensorCore::createInternalTrace(const MATMetadata& meta){
    uint32_t tag = (meta.rd << 16) | (meta.warp_id << 4) | (int)vortex::RegType::Float;
    vortex::pipeline_trace_t* trace = new vortex::pipeline_trace_t(tag , core_->arch());
    trace->wb = true; // If i'm creating an internal trace then I'm sure I'm writing back
    trace->wid = meta.warp_id;
    trace->rdest = meta.wb;
    trace->rdest_type = vortex::RegType::Float;
    return trace;
}

void TensorCore::handleInput(){
    for (uint32_t i = 0; i < ISSUE_WIDTH; ++i) {
        // Handle inputs
        auto& input= Inputs.at(i) ;
        if (input.empty()) {
            continue;
        }

        vortex::pipeline_trace_t* trace = input.front();


        static int count = 0;
        bool accepted_warp = false;

        // Load Inputs (assumption parallel loading)
        auto wid = trace->wid;
        auto& warp = core_->warps_[trace->wid]; // can't handle multiple independent data streams for now (per row in matrix buffers can add warp tag) (also independent matrix tile buffers)
        bool spaceav = true;
        for (size_t t = 0 ; t < MAX_NUM_THREADS; t++) {
            if (!trace->tmask.test(t)) {
                continue;
            }
            auto grp = t/m_config.num_pes % m_pe_groups.size();
            auto& pe_grp = m_pe_groups[grp];
            if (!pe_grp.spaceToAccept(trace->wid)) { // if ! space to accept exit
                spaceav = false;
                break;
            }
            if (!accepted_warp) {
                std:: cout << "Accepted input(" << count++ << "): " << *trace << std::endl;
                input.pop();
                accepted_warp = true;
                if (trace->eop) {
                    core_->committed_instrs_++;
                }
            }
            std::pair<uint16_t, uint16_t> A;  // can only load 2 operands of A at a time
            std::pair<uint16_t, uint16_t> B;  // can only load 2 operands of B at a time
            uint32_t c =0;

            // find first N(=2) operands of A and B and possible c depending on type

            uint32_t a_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc1];
            uint32_t b_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc2];

            A.second= (a_val & 0xFFFF0000) >> 16;
            A.first = a_val & 0xFFFF ;

            B.second = (b_val & 0xFFFF0000) >> 16;
            B.first = b_val & 0xFFFF ;

            if (pe_grp.mata(wid).isBackFull()  || pe_grp.mata(wid).isEmpty()){ // and can I add it
                MATMetadata meta;
                meta.wb = trace->wb;
                meta.warp_id = trace->wid;
                meta.rd = trace->rdest;
                std::cout << "A alloc Back full: " << pe_grp.mata(wid).isBackFull() << " Full: " << pe_grp.mata(wid).isFull() << " Empty: " << pe_grp.mata(wid).isEmpty() << std::endl;
                pe_grp.allocateRow( meta,wid);
            }


            if (trace->tc_type == vortex::TCOpType::ACC_REG) {
                c = warp->freg_file_.at(t)[trace->rsrc3];

            }
            else if(trace->tc_type == vortex::TCOpType::ACC_BUF) {
                // fetch from mat tile accumulator
                auto row = 0; // row is dependent on tid
                auto col = trace->rsrc3;
                c = m_pe_groups[grp].getAccMat(row, col);
                pe_grp.matc(wid).insert(c);
            }


            auto pe = t % m_config.num_pes;
            pe_grp.mata(wid).insert(A.first, pe );
            pe_grp.mata(wid).insert(A.second,pe );

            pe_grp.matb(wid).insert(B.first, pe);
            pe_grp.matb(wid).insert(B.second, pe);

            // print t, pe , grp , warp_id
            std::cout << "t: " << t << " pe: " << pe << " grp: " << grp << " warp_id: " << wid << " size(a): " <<  pe_grp.mata(wid).size(pe) << " depth " << pe_grp.mata(wid).depth() << std::endl;
            assert(pe_grp.mata(wid).size(pe) == 2);
            assert(pe_grp.matb(wid).size(pe) == 2);
        }

        // queue up trace if it fills up row and wb
        // Only valid with parallel loading
        bool add_trace = spaceav;
        for (size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
            if (m_pe_groups[grp].mata(wid).isBackFull() && m_pe_groups[grp].matb(wid).isBackFull() && !m_pe_groups[grp].matc(wid).isBackFull()){
                // if a and b are fully loaded and c isn't then fill rest of c with 0s (no acc) (assert c if empty otherwise there has been an error)
                assert(m_pe_groups[grp].matc(wid).isBackEmpty());
                while (!m_pe_groups[grp].matc(wid).isBackFull()) {
                    m_pe_groups[grp].matc(wid).insert(0);
                }
            }

            if (m_pe_groups[grp].mata(wid).isBackFull() && m_pe_groups[grp].matb(wid).isBackFull() && m_pe_groups[grp].matc(wid).isBackFull()) { // backs full and all are on the same row
                add_trace &= true;
                // fully loaded
            } else {
                add_trace = false;
            }

            if (grp >0) { // Add trace if entire row is fully loaded across pe groups
                add_trace &= (m_pe_groups[grp].mata(wid).depth() == m_pe_groups[grp-1].mata(wid).depth()) ;
            }
        }

        if (add_trace) {
            // set correct meta data according to trace
            for (size_t grp = 0 ; grp  < m_pe_groups.size(); grp++) {
                auto& meta = m_pe_groups[grp].mata(wid).frontMeta();
                meta.wb = trace->wb;    // determines
                meta.rd = trace->rdest;
            }
            std::cout << "Fully loaded and registered trace" << std::endl;
        }
        delete trace;
        // accept
        }
}

void TensorCore::compute(){
    // select a warp to process
    for(int wid = 0 ; wid < MAX_NUM_WARPS;wid++) { // priority based
        for(size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
            // pop already processed top row
            if (m_pe_groups[grp].matb(wid).isTopFull() && m_pe_groups[grp].getStep(wid) == m_config.num_pes){
                m_pe_groups[grp].popOperands(wid);
                std::cout << "Compute: popped operands GRP: " << grp << std::endl;
                continue;
            }

            // otherwise process new loaded row
            else if (m_pe_groups[grp].isReadyToFire(wid) ){ // let's assume i always write back for now
                //core_->issued_ins
                std::cout << "Compute: ready to fire GRP: " << grp <<  std::endl;
                MATMetadata meta = m_pe_groups[grp].matb(wid).frontMeta();
                for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
                    // calculate all results
                    // step and pop
                    auto& A = m_pe_groups[grp].mata(wid).frontRow(pe);
                    auto& B = m_pe_groups[grp].matb(wid).frontRow(pe);
                    auto& C = m_pe_groups[grp].matc(wid).frontRow(pe);

                    // reinterpret cast A, B as float 16
                    float int_result = 0 ;
                    for(size_t i = 0 ; i < m_config.operand_count; i++) {
                        float16 _a(A[i]);
                        float16 _b(B[i]);
                        float a = _a.to_float32();
                        float b = _b.to_float32();

                        int_result += a*b;
                    }
                    float C_f = uint32_to_float32(C[(pe + m_pe_groups[grp].getStep(wid)) % m_config.num_pes]);
                    int_result += C_f;
                    uint32_t result = float32_to_uint32(int_result);
                    // queue
                    m_timing.push({m_cycle+m_config.execution_latency+1, {meta, result, {grp, pe}}});
                }

                if(meta.wb) { // reserve in queue
                    m_pe_groups[grp].reserveOutput();
                }
                m_pe_groups[grp].step(wid);
            }
        }
    }
}

void TensorCore::queueToOutput(){
    while(!m_timing.empty()){
        auto& e = m_timing.front();
        if (e.first <= m_cycle) {
            auto& [meta, result, pe_id] = e.second;
            auto& [grp, pe] = pe_id;

            m_pe_groups[grp].insertOutput(pe, meta, result);
            std::cout << "Queue to output GRP " << grp << " pe: " << pe << " : warp_id: " << meta.warp_id << " reg: " << meta.rd << " val: " << result << std::endl;
            m_timing.pop();
        } else {
            break;
        }
    }
}

void TensorCore::drainOutQueue(){
    // need a better way to propagate backpressure at the output (or not?)
    // write result in register

    // writeback results
    bool commit = true;
    MATMetadata meta;
    for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
        for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
            if(m_pe_groups[grp].getOutputFIFO(pe).isEmpty()) { // if not empty and writing back to reg file
                commit = false;
            }
        }
    }

    // send to output & retire trace
    if (commit) {
        for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
            for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
                auto [_meta, val] = m_pe_groups[grp].popOutput(pe);
                meta = _meta;
                if (_meta.wb) {
                    auto& warp = core_->warps_[meta.warp_id];
                    warp->freg_file_.at(pe)[meta.rd] = val;
                }
                std::cout << "Writeback: warp_id: " << _meta.warp_id << " pe: " << pe << " reg: " << _meta.rd << " val: " << val << std::endl;
            }
        }
        //vortex::pipeline_trace_t* trace = m_traces.front();
        //m_traces.pop_front();
        ////if (trace->rdest_type == vortex::RegType::Float) {
        core_->issued_instrs_++;
        m_stat_out_traces++;
        auto* trace = createInternalTrace(meta);
        Outputs.at(0).send(trace,1 );
        //}
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


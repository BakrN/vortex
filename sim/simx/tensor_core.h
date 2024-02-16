#ifndef TENSOR_CORE_H
#define TENSOR_CORE_H
#include "exe_unit.h"

class VortexTensorCore: public vortex::ExeUnit {
public:
    VortexTensorCore(const SimContext& ctx, vortex::Core*);

    void tick();

private:
  uint32_t input_idx_;
};


// handle input
class TensorCore {
    public :

    private:
};

#endif

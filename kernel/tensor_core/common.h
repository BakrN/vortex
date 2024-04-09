#ifndef TC_COMMON_H
#define TC_COMMON_H
#include <stdint.h>
#include <limits.h>
#include <cmath>



// for now fixed types


#define KERNEL_ARG_DEV_MEM_ADDR 0x7ffff000

struct kernel_arg_t{
    unsigned int A_addr;
    unsigned int B_addr;
    unsigned int C_addr;
    unsigned int D_addr;

    int A_layout;
    int B_layout;
    int C_layout;
    int D_layout;

    unsigned int M_;
    unsigned int N_;
    unsigned int K_;
};

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



#endif

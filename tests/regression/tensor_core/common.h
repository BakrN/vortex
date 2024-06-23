#ifndef TC_COMMON_H
#define TC_COMMON_H
#include <stdint.h>



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

    int num_tasks;
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



#endif

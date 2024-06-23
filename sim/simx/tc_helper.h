#ifndef TC_HELPER_H
#define TC_HELPER_H

#include <cmath>
#include <cstring>
#include <limits>
#include <queue>
#include <stdexcept>

template<typename T>
class FIFO {
private:
    std::queue<T> queue;
    size_t maxCapacity;

public:
    FIFO() : maxCapacity(1){}
    FIFO(size_t capacity) : maxCapacity(capacity) {}
    ~FIFO(){ }

    void enqueue(const T& element) {
        if (queue.size() >= maxCapacity) {
            throw std::overflow_error("Queue has reached its maximum capacity");
        }
        queue.push(element);
    }

    T dequeue() {
        if (queue.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        T frontElement = queue.front();
        queue.pop();
        return frontElement;
    }

    bool isEmpty() const {
        return queue.empty();
    }

    bool isFull() const {
        return queue.size() >= maxCapacity;
    }

    size_t size() const {
        return queue.size();
    }

    T front() const {
        if (queue.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return queue.front();
    }

    void clear() {
        std::queue<T> emptyQueue;
        std::swap(queue, emptyQueue);
    }
};


// FP 16
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

inline float uint32_to_float32(uint32_t value) {
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

inline uint32_t float32_to_uint32(float value) {
    float v = value;
    uint32_t* ptr = reinterpret_cast<uint32_t*>(&v);
    uint32_t result = 0;
    std::memcpy(&result, ptr, sizeof(uint32_t));

    return result;

}


#endif // TC_HELPER_H

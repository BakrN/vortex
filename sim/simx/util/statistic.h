#ifndef _STATISTIC_H
#define _STATISTIC_H
#include <string>
namespace stat{

    //class StatisticBase {
    //};

    // template <typename T>

    class Statistic /*: public StatisticBase */{
        public:
            Statistic(const std::string& name) : name(name), sum(0), count(0), max(0), min(0){

            }
            ~Statistic() {
            }

            void addValue(uint64_t value) {
                sum += value;
                count++;
                if (value > max) {
                    max = value;
                }
                if (value < min) {
                    min = value;
                }
            }

            void reset() {
                sum = 0;
                count = 0;
                max = 0;
                min = 0;
            }

            std::string getName() {
                return name;
            }

            uint64_t getSum() {
                return sum;
            }

            uint64_t getCount() {
                return count;
            }

            uint64_t getMax() {
                return max;
            }

            uint64_t getMin() {
                return min;
            }

        private:
            std::string name;
            uint64_t sum;
            uint64_t count;
            uint64_t max;
            uint64_t min;
    };

}

#endif // _STATISTIC_H

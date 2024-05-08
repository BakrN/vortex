#ifndef _STATISTIC_H
#define _STATISTIC_H
#include <string>
namespace stat{

    //class StatisticBase {
    //};

    // template <typename T>

    class Statistic /*: public StatisticBase */{
        public:
            Statistic(const std::string& name) : m_name(name), m_sum(0), m_count(0), m_max(0), m_min(0){

            }
            ~Statistic() {
            }

            void addValue(uint64_t value) {
                m_sum += value;
                m_count++;
                if (value > m_max) {
                    m_max = value;
                }
                if (value < m_min) {
                    m_min = value;
                }
            }

            void reset() {
                m_sum = 0;
                m_count = 0;
                m_max = 0;
                m_min = 0;
            }

            std::string name() {
                return m_name;
            }

            uint64_t sum() {
                return m_sum;
            }

            uint64_t count() {
                return m_count;
            }

            uint64_t max() {
                return m_max;
            }

            uint64_t min() {
                return m_min;
            }

        private:
            std::string m_name;
            uint64_t m_sum;
            uint64_t m_count;
            uint64_t m_max;
            uint64_t m_min;
    };

}

#endif // _STATISTIC_H

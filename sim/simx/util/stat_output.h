#ifndef _STAT_OUTPUT_H
#define _STAT_OUTPUT_H
#include "statistic.h"
#include <fstream>

namespace statistics{
    class CSVStatOutput {
        public:
            CSVStatOutput( const std::string& stat_file = "statistic.txt") ;
            ~CSVStatOutput();
            void write(uint64_t timestamp, Statistic* stat);
        private:
            std::string fname;
            std::fstream file;
    };
}
#endif

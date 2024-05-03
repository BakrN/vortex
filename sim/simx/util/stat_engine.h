#ifndef _STAT_ENGINE_H
#define _STAT_ENGINE_H
#include <string>
#include <vector>
#include <memory>

#include "statistic.h"
#include "stat_output.h"

namespace stat{


class StatEngine {
    public:
        StatEngine(const std::string& stat_file = "statistic.txt") ;
        ~StatEngine();
        Statistic* registerStatistic(std::string name, bool resetOnOutput = true) ;
        void outputStatistics(uint64_t timestamp) ;

    private:
        std::string fname;  // file name
        std::vector<std::pair<std::unique_ptr<Statistic>, bool> > stats; // Statistic , resetOnOutput
        StatOutput output;
};

}
#endif // _STAT_ENGINE_H

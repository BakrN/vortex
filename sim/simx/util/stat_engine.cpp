#include "stat_engine.h"
using namespace stat;

StatEngine::StatEngine(const std::string& stat_file) {
    fname = stat_file;
}

StatEngine::~StatEngine() {
    // delete all statistics

}

Statistic* StatEngine::registerStatistic(std::string name, bool resetOnOutput) {
    auto pair = std::make_pair(std::make_unique<Statistic>(name), resetOnOutput);
    stats.emplace_back(pair);
    return stats.back().first.get();
}

void StatEngine::outputStatistics(uint64_t timestamp) {
    for (auto& stat : stats) {
        output.write(timestamp, stat.first.get());
        if (stat.second) {
            stat.first->reset();
        }
    }
}

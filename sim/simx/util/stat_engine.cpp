#include "stat_engine.h"
using namespace stat;

StatEngine::StatEngine(const std::string& stat_file) {
    fname = stat_file;
}

StatEngine::~StatEngine() {
    // delete all statistics
    for (size_t i = 0; i < stats.size(); i++) {
        delete stats[i].first;
    }
}


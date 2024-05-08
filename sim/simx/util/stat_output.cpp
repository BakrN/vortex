#include "stat_output.h"

using namespace stat;

CSVStatOutput::CSVStatOutput( const std::string& stat_file ) : fname(stat_file) {
    file.open(fname, std::ios::out | std::ios::app);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file: " + fname);
    }
    file << "timestamp,stat_name,sum,count,max,min\n";
};

CSVStatOutput::~CSVStatOutput() {
    file.close();
}

void CSVStatOutput::write(uint64_t timestamp, Statistic* stat) {
    file << timestamp << "," << stat->name() << "," << stat->sum() << "," << stat->count() << "," << stat->max() << "," << stat->min() << "\n";
}

#ifndef MAXANALYZER_H
#define MAXANALYZER_H

#include "analyzer.h"

class MaxAnalyzer : public Analyzer
{
public:
    MaxAnalyzer();
    MaxAnalyzer(DataGate *dG);
    string getSensorType();
    void fetchData(double data[]);
    int dataSize();
};

#endif // MAXANALYZER_H

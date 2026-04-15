#ifndef AVGANALYZER_H
#define AVGANALYZER_H

#include "analyzer.h"

class AvGAnalyzer : public Analyzer
{
protected:
    DataGate* dG;
public:
    AvGAnalyzer();
    AvGAnalyzer(DataGate* dG);
    string getSensorType();
    void fetchData(double data[]);
    int dataSize();
};

#endif // AVGANALYZER_H

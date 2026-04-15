#include "maxanalyzer.h"

MaxAnalyzer::MaxAnalyzer() {}
MaxAnalyzer::MaxAnalyzer(DataGate* dG)
{
    this->dG = dG;
}

string MaxAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

void MaxAnalyzer::fetchData(double data[])
{
    double tmp[100];
    dG->fetchData(tmp);
    double max=tmp[0];
    for(int i=1; i < dG->dataSize(); i++)
        if(tmp[i]>max)
            max = tmp[i];
    data[0] = max;
}

int MaxAnalyzer::dataSize()
{
    return 1;
}

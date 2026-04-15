#include "avganalyzer.h"

AvGAnalyzer::AvGAnalyzer() {}
AvGAnalyzer::AvGAnalyzer(DataGate* dG)
{
    this->dG = dG;
}

string AvGAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

void AvGAnalyzer::fetchData(double data[])
{
    double tmp[100];
    dG->fetchData(tmp);
    double avg = 0;
    for(int i=0; i < dG->dataSize(); i++)
        avg = avg + tmp[i];

    data[0] = avg/dG->dataSize();
}

int AvGAnalyzer::dataSize()
{
    return 1;
}

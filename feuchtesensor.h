#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H

#include "datagate.h"

class FeuchteSensor : public DataGate
{
private:
    double messdata[10];
public:
    FeuchteSensor();
    string getSensorType();
    void fetchData(double data[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H

#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include "datagate.h"

class TemperaturSensor : public DataGate
{
private:
    double messdata[5];
    int messdatasize = 5;
    string type = "Temperatur";
public:
    TemperaturSensor();
    string getSensorType();
    void fetchData(double data[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H

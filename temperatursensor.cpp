#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor()
{
    //zum Testen 5 Zufallswerte erzeugen
    srand(time(NULL));
    for(int i=0 ; i < messdatasize ; i++)
    {
        messdata[i] = -50 + (rand() % 1201)/10.0;
    }
}

string TemperaturSensor::getSensorType()
{
    return type;
}

void TemperaturSensor::fetchData(double data[])
{
    for(int i=0 ; i < messdatasize ; i++)
    {
        data[i] = messdata[i];
    }
}

int TemperaturSensor::dataSize()
{
    return messdatasize;
}

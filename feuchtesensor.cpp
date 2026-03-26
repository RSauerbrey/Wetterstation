#include "feuchtesensor.h"

FeuchteSensor::FeuchteSensor()
{
    //zum Testen 10 Zufallswerte erzeugen
    srand(time(NULL));
    for(int i=0 ; i < 10 ; i++)
    {
        messdata[i] = (rand() % 1001)/10.0;
    }
}

string FeuchteSensor::getSensorType()
{
    return "Luftfeuchte";
}

void FeuchteSensor::fetchData(double data[])
{
    for(int i=0 ; i < 10 ; i++)
    {
        data[i] = messdata[i];
    }
}

int FeuchteSensor::dataSize()
{
    return 10;
}

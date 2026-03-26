#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"
using namespace std;

int main()
{
    DataGate *f = new FeuchteSensor;
    DataGate *t = new TemperaturSensor;
    double werte[100]={};

    cout << f->getSensorType() << endl;
    f->fetchData(werte);

    for(int i=0 ; i < f->dataSize() ; i++)
    {
        cout << werte[i] << endl;
    }

    cout << t->getSensorType() << endl;
    t->fetchData(werte);

    for(int i=0 ; i < t->dataSize() ; i++)
    {
        cout << werte[i] << endl;
    }

    return 0;
}

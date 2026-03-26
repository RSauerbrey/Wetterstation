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

    DataGate *mySensors[2];
    mySensors[0] = f;
    mySensors[1] = t;

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
    cout << "***********************" << endl;
    for(int i=0 ; i < 2 ; i++)
    {
        cout << mySensors[i]->getSensorType() << endl;
        mySensors[i]->fetchData(werte);
        for(int j=0 ; j < mySensors[i]->dataSize() ; j++)
        {
            cout << werte[j] << endl;
        }
    }
    return 0;
}

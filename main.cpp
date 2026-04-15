#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"
#include "analyzer.h"
#include "maxanalyzer.h"
#include "avganalyzer.h"

using namespace std;

int main()
{
    DataGate *f = new FeuchteSensor;
    DataGate *t = new TemperaturSensor;
    double werte[100]={};

    f->fetchData(werte);
    for(int i=0; i<f->dataSize();i++)
        cout<<werte[i] << endl;

    cout << "------------\n";
    DataGate* m = new MaxAnalyzer(f);
    DataGate* a = new AvGAnalyzer(f);
    m->fetchData(werte);
    cout << werte[0] << endl;

    a->fetchData(werte);
    cout << werte[0] << endl;

    return 0;
}

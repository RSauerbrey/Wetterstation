#include <iostream>
#include "datagate.h"
#include "feuchtesensor.h"

using namespace std;

int main()
{
    DataGate *f = new FeuchteSensor;
    double werte[100]={};

    f->fetchData(werte);

    for(int i=0 ; i < f->dataSize() ; i++)
    {
        cout << werte[i] << endl;
    }

    return 0;
}

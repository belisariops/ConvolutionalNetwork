#include <iostream>
#include "RandomGenerator.h"
#include "Filter.h"
#include "FeatureMap.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Filter* f = new Filter(2,2);


    f->setValue(0,1,2);
    f->setValue(1,1,2);
    f->setValue(1,0,2);
    f->setValue(0,0,2);

    FeatureMap * k = new FeatureMap(2,2);
    k->setValue(0,1,2);
    k->setValue(1,1,2);
    k->setValue(1,0,2);
    k->setValue(0,0,2);

    FeatureMap* h = k->conv(f);
    std::cout << h->getValues()[0][0] << std::endl;
    for (int a=0; a<2;a++)
        for(int b=0; b<2; b++)
            //std::cout << h->getValues()[a][b] << std::endl;


    return 0;
}
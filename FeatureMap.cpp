//
// Created by belisariops on 9/27/17.
//

#include "FeatureMap.h"

FeatureMap::FeatureMap(unsigned long width, unsigned long height) : Matrix(width,height) {
}

FeatureMap::~FeatureMap(){

}

FeatureMap * FeatureMap::convMap(Filter *filter) {
    unsigned long returnedMapWidth = this->getWidth() - filter->getWidth() + 1;
    unsigned long returnedMapHeight = this->getHeight() - filter->getHeight() + 1;
    FeatureMap *returnedMap = new FeatureMap(returnedMapWidth, returnedMapHeight);
    std::vector<std::vector<double>> values = returnedMap->getValues();
    double box;
    //TODO Paralelizar
    for (int i=0; i < returnedMapWidth; i++) {
        for (int j=0; j < returnedMapHeight; j++) {
            box = 0;
            for (int k=0; k < filter->getWidth(); k++) {
                for (int l=0; l < filter->getHeight(); l++) {
                    box += this->map[i+k][j+l] * filter->getValues()[k][l];
                }
            }
            returnedMap->setValue(i,j,box);
        }
    }


    return returnedMap;
}



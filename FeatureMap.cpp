//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include "FeatureMap.h"
#include "Filter.h"

FeatureMap::FeatureMap(unsigned long width, unsigned long height) : Matrix(width,height) {
}

FeatureMap::~FeatureMap(){

}

Filter *FeatureMap::calculateDeltasForPreviousLayer(Filter *filter) {
    for (int w = 0; w < filter->getWidth(); w++) {
        for (int h=0; h < filter->getHeight(); h++)
            std::cout << filter->getDeltaValue(w,h);
        std::cout << std::endl;
    }
    Filter *rotWeights = filter->rot();
    for (int w = 0; w < filter->getWidth(); w++) {
        for (int h=0; h < filter->getHeight(); h++)
            std::cout << rotWeights->getValue(w,h);
        std::cout << std::endl;
    }

    Filter *convResult = rotWeights->conv(filter->getDeltas());
    //convResult->transferDerivative(this);
    //delete rotWeights;
    return new Filter(2,2);
}



//
// Created by belisariops on 9/27/17.
//

#include "FeatureMap.h"
#include "Filter.h"

FeatureMap::FeatureMap(unsigned long width, unsigned long height) : Matrix(width,height) {
}

FeatureMap::~FeatureMap(){

}

Filter *FeatureMap::calculateDeltasForPreviousLayer(Filter *filter) {
    Filter *rotWeights = filter->rot();
    Filter *convResult = rotWeights->conv(filter->getDeltas());
    convResult->transferDerivative(this);
    delete rotWeights;
    return convResult;
}



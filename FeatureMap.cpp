//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include "FeatureMap.h"

FeatureMap::FeatureMap(int height, int width) : Matrix(height,width) {

}



FeatureMap::~FeatureMap(){
}

FeatureMap FeatureMap::correlation(Filter filter) {
    return FeatureMap(0, 0);
}




//
// Created by belisariops on 9/27/17.
//

#ifndef CONVOLUTIONALNETWORK_FEATUREMAP_H
#define CONVOLUTIONALNETWORK_FEATUREMAP_H


#include "Matrix.h"
#include "Filter.h"


class FeatureMap  {
public:
    FeatureMap(int height, int width);
    ~FeatureMap();
    FeatureMap correlation(Filter filter);
};


#endif //CONVOLUTIONALNETWORK_FEATUREMAP_H

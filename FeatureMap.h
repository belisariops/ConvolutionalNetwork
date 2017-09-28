//
// Created by belisariops on 9/27/17.
//

#ifndef CONVOLUTIONALNETWORK_FEATUREMAP_H
#define CONVOLUTIONALNETWORK_FEATUREMAP_H


#include <vector>
#include "Matrix.h"
#include "Filter.h"

class FeatureMap : public Matrix {
public:
    FeatureMap(unsigned long width, unsigned long height);
    ~FeatureMap();
    int gola();
    FeatureMap* conv(Filter *filter);
private:
    typedef Matrix super;

};


#endif //CONVOLUTIONALNETWORK_FEATUREMAP_H

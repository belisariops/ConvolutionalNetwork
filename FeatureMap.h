//
// Created by belisariops on 9/27/17.
//

#ifndef CONVOLUTIONALNETWORK_FEATUREMAP_H
#define CONVOLUTIONALNETWORK_FEATUREMAP_H


#include "Matrix.h"

class Filter;


class FeatureMap : public Matrix {
public:
    FeatureMap(unsigned long width, unsigned long height);
    ~FeatureMap();
    Filter *calculateDeltasForPreviousLayer(Filter *filter);
private:
    typedef Matrix super;

};


#endif //CONVOLUTIONALNETWORK_FEATUREMAP_H

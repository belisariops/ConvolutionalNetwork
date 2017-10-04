//
// Created by belisariops on 9/27/17.
//

#ifndef CONVOLUTIONALNETWORK_FEATUREMAP_H
#define CONVOLUTIONALNETWORK_FEATUREMAP_H


#include "Matrix.h"
#include "NeuronStructure.h"

class Filter;


class FeatureMap : public Matrix {
public:
    FeatureMap(unsigned long width, unsigned long height);
    ~FeatureMap();
    void setOutput(int width, int height, double value);
    void setDelta(int width, int height, double value);
    Filter *calculateDeltasForPreviousLayer(Filter *filter);
    void rotDeltas();
private:
    typedef Matrix super;
    std::vector<std::vector<NeuronStructure *>> neurons;
};


#endif //CONVOLUTIONALNETWORK_FEATUREMAP_H

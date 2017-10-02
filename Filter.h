//
// Created by belisariops on 9/24/17.
//

#ifndef CONVOLUTIONALNETWORK_FILTER_H
#define CONVOLUTIONALNETWORK_FILTER_H

#include "Matrix.h"
#include "FeatureMap.h"

class Filter : public Matrix {
public:
    Filter(unsigned long width, unsigned long height);
    Filter(std::vector<std::vector<double>> values);
    Filter *rot();
    ~Filter();
    void setDeltas(std::vector<std::vector<double>> newDeltas);
    Filter *calculateDeltasForPreviousLayer(FeatureMap *outputPreviousLayer);
    Filter *conv(std::vector<std::vector <double>> otherDeltas);
    FeatureMap *getFeatureMapOutput();
    void setFeatureMap(FeatureMap * map);

private:
    typedef Matrix super;
    FeatureMap *output;
    std::vector<std::vector<double>> deltas;

    void transferDerivative(FeatureMap *pMap);
};


#endif //CONVOLUTIONALNETWORK_FILTER_H

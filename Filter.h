//
// Created by belisariops on 9/24/17.
//

#ifndef CONVOLUTIONALNETWORK_FILTER_H
#define CONVOLUTIONALNETWORK_FILTER_H

#include "Matrix.h"
#include "FeatureMap.h"

class Filter : public Matrix {
    typedef struct Neuron{
        double weight;
        double delta;
    } Neuron;

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
    FeatureMap *convMap(FeatureMap *map);
    void setDeltaValue(int width, int height, double value);
    double getDeltaValue(int width,int height);

    std::vector<std::vector<double>> getDeltas();

    void transferDerivative(FeatureMap *pMap);

private:
    typedef Matrix super;
    FeatureMap *output;
    std::vector<std::vector<double>> deltas;

};


#endif //CONVOLUTIONALNETWORK_FILTER_H

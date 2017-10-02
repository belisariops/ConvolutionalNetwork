//
// Created by belisariops on 9/23/17.
//

#ifndef CONVOLUTIONALNETWORK_NEURALLAYER_H
#define CONVOLUTIONALNETWORK_NEURALLAYER_H


#include <vector>
#include "Neuron.h"
#include "Filter.h"
#include "FeatureMap.h"

class NeuralLayer {
public:
    NeuralLayer *getPreviousLayer();
    NeuralLayer *getNextLayer();
    void setPreviousLayer(NeuralLayer *layer);
    void setNextLayer(NeuralLayer *layer);
    void connect(NeuralLayer *layer);
    virtual void buildRandomLayer();
    virtual void backPropagation() =  0;
    virtual void forwardPropagation(std::vector<FeatureMap *> input) = 0;
    virtual void forwardPropagationVector(std::vector<double> input);
    virtual std::vector<Filter *> getKernels();

protected:
    double transferDerivative(double output);
    std::vector<double> getWeights();
private:
    NeuralLayer *previousLayer;
    NeuralLayer *nextLayer;
    std::vector<double> weights;
};


#endif //CONVOLUTIONALNETWORK_NEURALLAYER_H

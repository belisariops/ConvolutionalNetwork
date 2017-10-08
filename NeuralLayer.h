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
    virtual ~NeuralLayer();
    NeuralLayer *getPreviousLayer();
    NeuralLayer *getNextLayer();
    void setPreviousLayer(NeuralLayer *layer);
    void setNextLayer(NeuralLayer *layer);
    virtual void connect(NeuralLayer *layer);
    int getChannels();
    virtual void buildRandomLayer(int minValues,int maxValues) = 0;
    virtual void backPropagation() =  0;
    virtual void forwardPropagation(Matrix *input, int quantity) = 0;
    virtual void applyPropagationChanges(Matrix *input, int quantity) = 0;
    Matrix getDeltas(int index);

protected:
    double transferDerivative(double output);
    Matrix *outputFeatureMap;
    Matrix *kernels;
    Matrix *deltas;
    Matrix *inputFeatureMap;
    int channels;
    int kernelHeight;
    int kernelWidth;
    NeuralLayer *previousLayer;
    NeuralLayer *nextLayer;
};


#endif //CONVOLUTIONALNETWORK_NEURALLAYER_H

//
// Created by belisariops on 9/23/17.
//

#ifndef CONVOLUTIONALNETWORK_NEURALLAYER_H
#define CONVOLUTIONALNETWORK_NEURALLAYER_H


#include <vector>
#include "Neuron.h"

class NeuralLayer {
public:
    NeuralLayer *getPreviousLayer();
    NeuralLayer *getNextLayer();
    void setPreviousLayer(NeuralLayer *layer);
    void setNextLayer(NeuralLayer *layer);
    void connect(NeuralLayer *layer);
    virtual void buildRandomLayer();
    virtual double *getOutput(std::vector<double> input) = 0;
    virtual void backPropagation() =  0;
    virtual void forwardPropagation() = 0;

protected:
    std::vector<double> getWeights();
private:
    NeuralLayer *previousLayer;
    NeuralLayer *nextLayer;
    std::vector<double> weights;
};


#endif //CONVOLUTIONALNETWORK_NEURALLAYER_H

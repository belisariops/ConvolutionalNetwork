//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H
#define CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H


#include "NeuralLayer.h"
#include "SigmoidNeuron.h"

class FullyConnectedLayer : public NeuralLayer {
public:
    FullyConnectedLayer(int height, int width, double learningRate);
    ~FullyConnectedLayer();
    void buildRandomLayer(int minValues,int maxValues) override ;
    void backPropagation() override ;
    void forwardPropagation(Matrix **input, int quantity) override ;
    void applyPropagationChanges(Matrix **input, int quantity) override ;
private:
    std::vector<SigmoidNeuron> neurons;
    FullyConnectedLayer *nextLayer;
    int numNeurons;
};


#endif //CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H

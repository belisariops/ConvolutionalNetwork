//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H
#define CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H


#include "NeuralLayer.h"
#include "SigmoidNeuron.h"

class FullyConnectedLayer : public NeuralLayer {
public:
    FullyConnectedLayer(int numNeurons, double learningRate);
    ~FullyConnectedLayer();
    void buildRandomLayer(int minValues,int maxValues);
    void backPropagation()  ;
    void forwardPropagation(Matrix *input, int quantity);
    void applyPropagationChanges(Matrix *input, int quantity);
private:
    std::vector<SigmoidNeuron> neurons;
    FullyConnectedLayer *nextLayer;
};


#endif //CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H

//
// Created by belisariops on 10/9/17.
//

#ifndef CONVOLUTIONALNETWORK_OUTPUTLAYER_H
#define CONVOLUTIONALNETWORK_OUTPUTLAYER_H


#include "FullyConnectedLayer.h"

class OutputLayer : public FullyConnectedLayer{
public:
    OutputLayer(int inputHeight, int inputWidth, int channels, int numNeurons, double learningRate);
    void forwardPropagation(Matrix **input, int quantity);
    void propagate(Matrix *expectedOutput);
    Matrix *getOutput();

};


#endif //CONVOLUTIONALNETWORK_OUTPUTLAYER_H

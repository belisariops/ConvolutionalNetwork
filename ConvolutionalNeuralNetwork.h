//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_CONVOLUTIONALNEURALNETWORK_H
#define CONVOLUTIONALNETWORK_CONVOLUTIONALNEURALNETWORK_H


#include "InputLayer.h"
#include "OutputLayer.h"

class ConvolutionalNeuralNetwork {
    ConvolutionalNeuralNetwork(int numConvolutionalLayers,int numPoolingLayer,int numFullyConnectedLayers,int numOutputClasses);

private:
    InputLayer *firstLayer;
    OutputLayer *lastLayer;
};


#endif //CONVOLUTIONALNETWORK_CONVOLUTIONALNEURALNETWORK_H

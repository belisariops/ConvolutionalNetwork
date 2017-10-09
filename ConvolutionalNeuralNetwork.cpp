//
// Created by belisariops on 9/25/17.
//

#include "ConvolutionalNeuralNetwork.h"

ConvolutionalNeuralNetwork::ConvolutionalNeuralNetwork(int numConvolutionalLayers, int numPoolingLayer,
                                                       int numFullyConnectedLayers, int numOutputClasses) {
    firstLayer = new InputLayer(0,0,0);
    lastLayer  = new OutputLayer(0,0,0,0,0);

}

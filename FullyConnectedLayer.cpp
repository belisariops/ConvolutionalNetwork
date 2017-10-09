//
// Created by belisariops on 9/25/17.
//

#include <cstdlib>
#include <ctime>
#include "FullyConnectedLayer.h"
#include "RandomGenerator.h"

void FullyConnectedLayer::buildRandomLayer(int minValues, int maxValues) {

}

void FullyConnectedLayer::backPropagation() {
//    double error = 0;
//    for (SigmoidNeuron neuron : neurons) {
//        //TODO por cada clase o neurona de la siguiente capa
//        int index = 0;
//        for (SigmoidNeuron nextLayerNeuron : nextLayer->neurons) {
//            error += nextLayerNeuron.getWeight(index)*nextLayerNeuron.getDelta();
//            index++;
//        }
//        neuron.setDelta(error * transferDerivative(neuron.getOutput()))
//    }

}

void FullyConnectedLayer::forwardPropagation(Matrix **input, int quantity) {

}

void FullyConnectedLayer::applyPropagationChanges(Matrix **input, int quantity) {

}

FullyConnectedLayer::FullyConnectedLayer(int inputHeight,int inputWidth, double learningRate) : NeuralLayer(inputHeight,inputWidth,inputHeight*inputWidth,inputHeight,inputWidth) {
//    this->numNeurons = width * height;
//    kernels = (Matrix *)malloc(numNeurons * sizeof(Matrix));
//    deltas = (Matrix *)malloc(numNeurons * sizeof(Matrix));
//    outputFeatureMap = new Matrix(numNeurons,1);
//    for (int k = 0; k < numNeurons; ++k) {
//        kernels[k] = Matrix(height,width);
//        outputFeatureMap[k] = Matrix(,outputWidth);
//        deltas[k] = Matrix(outputHeight,outputWidth);
//    }
//    inputFeatureMap = (Matrix *)malloc(kernelQuantity * sizeof(Matrix));
}

FullyConnectedLayer::~FullyConnectedLayer() {

}

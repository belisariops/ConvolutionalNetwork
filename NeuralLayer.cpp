//
// Created by belisariops on 9/23/17.
//

#include <iostream>
#include "NeuralLayer.h"

NeuralLayer *NeuralLayer::getPreviousLayer() {
    return previousLayer;
}

NeuralLayer *NeuralLayer::getNextLayer() {
    return nextLayer;
}

void NeuralLayer::setPreviousLayer(NeuralLayer *layer) {
    this->previousLayer = layer;
}

void NeuralLayer::setNextLayer(NeuralLayer *layer) {
    this->nextLayer = layer;
}

void NeuralLayer::connect(NeuralLayer *layer) {
    this->nextLayer = layer;
    layer->setNextLayer(this);
}

void NeuralLayer::buildRandomLayer() {

}

std::vector<double> NeuralLayer::getWeights() {
    return this->weights;
}

void NeuralLayer::forwardPropagationVector(std::vector<double> input) {
    std::cout << "NeruralLayer no hace nada" << std::endl;
}

double NeuralLayer::transferDerivative(double output) {
    return output*(1.0 - output);
}

std::vector<Filter *> NeuralLayer::getKernels() {
    std::vector<Filter *> emptyVector;
    return emptyVector;
}







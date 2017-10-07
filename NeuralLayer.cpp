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

double NeuralLayer::transferDerivative(double output) {
    return output*(1.0 - output);
}

int NeuralLayer::getChannels() {
    return channels;
}

Matrix NeuralLayer::getDeltas(int index) {
    return deltas[index];
}







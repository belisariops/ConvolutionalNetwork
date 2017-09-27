//
// Created by belisariops on 9/23/17.
//

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







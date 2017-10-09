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
    layer->setPreviousLayer(this);
}

double NeuralLayer::transferDerivative(double output) {
    return output*(1.0 - output);
}

int NeuralLayer::getChannels() {
    return channels;
}

Matrix *NeuralLayer::getDeltas(int index) {
    return deltas[index];
}

NeuralLayer::~NeuralLayer() {
    for(int i=0; i < channels; ++i) {
        delete[] this->kernels[i];
        delete[] this->outputFeatureMap[i];
        delete[] this->deltas[i];
    }
    delete[] this->kernels;
    delete[] this->outputFeatureMap;
    delete[] this->deltas;
}

NeuralLayer::NeuralLayer(int kernelHeight, int kernelWidth, int kernelQuantity, int inputHeight, int inputWidth) {
    this->kernelHeight = kernelHeight;
    this->kernelWidth = kernelWidth;
    channels = kernelQuantity;
    kernels = new Matrix*[kernelQuantity];
    deltas = new Matrix*[kernelQuantity];
    outputFeatureMap = new Matrix*[kernelQuantity];
    int outputHeight = inputHeight - kernelHeight +1;
    int outputWidth = inputWidth - kernelWidth +1;
    for (int k = 0; k < kernelQuantity; ++k) {
        kernels[k] = new Matrix(kernelHeight,kernelWidth);
        outputFeatureMap[k] = new Matrix(outputHeight,outputWidth);
        deltas[k] = new Matrix(outputHeight,outputWidth);
    }
    inputFeatureMap = new Matrix*[kernelQuantity];
}







//
// Created by belisariops on 9/25/17.
//

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ConvolutionalLayer.h"
#include "RandomGenerator.h"

ConvolutionalLayer::ConvolutionalLayer(int kernelHeight,int kernelWidth,int kernelQuantity,int inputHeight, int inputWidth) {
    this->kernelHeight = kernelHeight;
    this->kernelWidth = kernelWidth;
    channels = kernelQuantity;
    kernels = (Matrix *)malloc(kernelQuantity * sizeof(Matrix));
    deltas = (Matrix *)malloc(kernelQuantity * sizeof(Matrix));
    outputFeatureMap = (Matrix *)malloc(kernelQuantity * sizeof(Matrix));
    int outputHeight = inputHeight - kernelHeight +1;
    int outputWidth = inputWidth - kernelWidth +1;
    for (int k = 0; k < kernelQuantity; ++k) {
        kernels[k] = Matrix(kernelHeight,kernelWidth);
        outputFeatureMap[k] = Matrix(outputHeight,outputWidth);
        deltas[k] = Matrix(outputHeight,outputWidth);
    }
}

ConvolutionalLayer::~ConvolutionalLayer() {
    free(kernels);
    free(outputFeatureMap);
}

void ConvolutionalLayer::buildRandomLayer(int minValues, int maxValues) {
    for (int i = 0; i < channels; ++i) {
        kernels[i].setRandomValues(minValues, maxValues);
    }

}

void ConvolutionalLayer::backPropagation() {
    updateDeltas();
}

void ConvolutionalLayer::forwardPropagation(Matrix *input, int quantity) {
    //TODO
    delete outputFeatureMap;
    outputFeatureMap = new Matrix[channels];
    for (int k = 0; k < channels; ++k) {
        int width = input[0].getWidth() - kernels[k].getWidth() + 1;
        int height = input[0].getHeight() - kernels[k].getHeight() + 1;
        outputFeatureMap[k] = Matrix(height,width);
        for (int i = 0; i < quantity; ++i) {
            kernels->rot();
            outputFeatureMap[k] = outputFeatureMap[k] + input[i] * kernels[k];
            kernels->rot();
        }
    }
    //forwardPropagation(outputFeatureMap,channels);
}

void ConvolutionalLayer::updateWeights(Matrix *input, int quantity) {
    for (int i = 0; i < channels; ++i) {
        deltas[i].rot();
        for (int c = 0; c < quantity; ++c) {
            kernels[i] = kernels[i] + input[c]*deltas[i];
        }
        deltas[i].rot();
    }
}

void ConvolutionalLayer::updateDeltas() {
    for (int i = 0; i < channels; i++) {
        kernels[i].rot();

        //TODO solucionar sigabort de nextLayer->getDeltas()[i]
        Matrix aux = kernels[i]*(nextLayer->getDeltas(i));
        aux.applyTransfereDerivative();
        deltas[i] = deltas[i] + aux;

        kernels[i].rot();
    }
}

void ConvolutionalLayer::applyPropagationChanges(Matrix *input, int quantity) {
    updateWeights(input,quantity);
}






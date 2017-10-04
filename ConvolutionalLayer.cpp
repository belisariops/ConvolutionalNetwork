//
// Created by belisariops on 9/25/17.
//

#include <ctime>
#include <cstdlib>
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

}

void ConvolutionalLayer::forwardPropagation(Matrix *input, int quantity) {
    //TODO
    Matrix currentMap;
    free(outputFeatureMap);
    outputFeatureMap = (Matrix*)malloc(quantity * channels * sizeof(FeatureMap));
    int count = 0;
    for (int i = 0; i < quantity; ++i) {
        currentMap = input[i];
        for (int k = 0; k < channels; ++k) {
            kernels->rot();
            outputFeatureMap[count] = currentMap*kernels[k];
            kernels->rot();
        }
    }
    forwardPropagation(outputFeatureMap,count);
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
    for (int i = 0; i < channels; ++i) {
        kernels[i].rot();
        for (int k = 0; k < nextLayer->getChannels(); ++k) {
            deltas[i] = deltas[i] + kernels[i]*deltas[i];
        }
        kernels[i].rot();
    }
}






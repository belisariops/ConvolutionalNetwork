//
// Created by belisariops on 9/25/17.
//

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ConvolutionalLayer.h"

ConvolutionalLayer::ConvolutionalLayer(int kernelHeight,int kernelWidth,int kernelQuantity,int inputHeight, int inputWidth) : NeuralLayer(kernelHeight,kernelWidth,kernelQuantity,inputHeight, inputWidth) {

}

ConvolutionalLayer::~ConvolutionalLayer() {
}

void ConvolutionalLayer::buildRandomLayer(int minValues, int maxValues) {
    for (int i = 0; i < channels; ++i) {
        kernels[i]->setRandomValues(minValues, maxValues);
    }

}

void ConvolutionalLayer::backPropagation() {
    updateDeltas();
}

void ConvolutionalLayer::forwardPropagation(Matrix **input, int quantity) {
    //TODO
    //delete outputFeatureMap;
    //outputFeatureMap = new Matrix[channels];
    for (int k = 0; k < channels; ++k) {
        int width = input[0]->getWidth() - kernels[k]->getWidth() + 1;
        int height = input[0]->getHeight() - kernels[k]->getHeight() + 1;
        outputFeatureMap[k] = new Matrix(height,width);
        for (int i = 0; i < quantity; ++i) {
            kernels[k]->rot();
            Matrix *x = new Matrix();
            *x = (*input[i]) * (*kernels[k]);
            *outputFeatureMap[k] = (*outputFeatureMap[k]) +  (*input[i]) * (*kernels[k]);
            kernels[k]->rot();
        }
    }

    for (int j = 0; j < outputFeatureMap[0]->getHeight(); ++j) {
        for (int i = 0; i < outputFeatureMap[0]->getWidth(); ++i) {
            std::cout << outputFeatureMap[0]->getValues(j,i) << " ";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;
    std::cout << std::endl;
    nextLayer->forwardPropagation(outputFeatureMap,channels);
}

void ConvolutionalLayer::updateWeights(Matrix **input, int quantity) {
    for (int i = 0; i < channels; ++i) {
        deltas[i]->rot();
        for (int c = 0; c < quantity; ++c) {
            (*kernels[i]) += (*input[c])*(*deltas[i]);
        }
        deltas[i]->rot();
    }
}

void ConvolutionalLayer::updateDeltas() {
    for (int i = 0; i < channels; i++) {
        kernels[i]->rot();
        Matrix aux = (*kernels[i])*(*(nextLayer->getDeltas(i)));
        //Cuidado aca
        aux.applyTransfereDerivative();
        (*deltas[i]) += aux;

        kernels[i]->rot();
    }
}

void ConvolutionalLayer::applyPropagationChanges(Matrix **input, int quantity) {
    updateWeights(input,quantity);
}






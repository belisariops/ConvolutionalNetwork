//
// Created by belisariops on 9/25/17.
//

#include <cstdlib>
#include <iostream>
#include "PoolingLayer.h"



PoolingLayer::PoolingLayer(int windowHeight, int windowWidth, int channels,int inputHeight, int inputWidth) :NeuralLayer(kernelHeight,kernelWidth,channels,inputHeight, inputWidth) {
    this->windowHeight = windowHeight;
    this->windowWidth = windowWidth;
}

void PoolingLayer::buildRandomLayer(int minValues, int maxValues) {

}

void PoolingLayer::backPropagation() {

}

void PoolingLayer::forwardPropagation(Matrix **input, int quantity) {
    for (int i = 0; i < quantity; ++i) {
        Matrix *localInput = input[i];
        /*Siempre hacer que el input y window sean divisibles*/
        int height = localInput->getHeight()/windowHeight;
        int width = localInput->getWidth()/windowWidth;
        Matrix *outputMatrix = new Matrix(height,width);
        for (int h = 0; h < height; ++h) {
            for (int w = 0; w < width; ++w) {
                double maxValue = 0;
                for (int j = height*h; j < height*h+windowHeight; ++j) {
                    for (int k = width*w; k < width*w+windowWidth; ++k) {
                        if (maxValue < localInput->getValues(j,k))
                            maxValue = localInput->getValues(j,k);
                    }
                }
                outputMatrix->setValues(h,w,maxValue);
            }
        }
        outputFeatureMap[i] = outputMatrix;
    }
    for (int j = 0; j < outputFeatureMap[0]->getHeight(); ++j) {
        for (int i = 0; i < outputFeatureMap[0]->getWidth(); ++i) {
            std::cout << outputFeatureMap[0]->getValues(j,i) << " ";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;
    std::cout << std::endl;
    nextLayer->forwardPropagation(outputFeatureMap,quantity);
}

void PoolingLayer::applyPropagationChanges(Matrix **input, int quantity) {
    nextLayer->applyPropagationChanges(input,quantity);
}

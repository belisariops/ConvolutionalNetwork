//
// Created by belisariops on 9/25/17.
//

#include <cmath>
#include <cstdlib>
#include <iostream>
#include "ReluLayer.h"

ReluLayer::ReluLayer(int channels) : NeuralLayer(0,0,channels,0,0) {

}

void ReluLayer::buildRandomLayer(int minValues, int maxValues) {

}

/*A Relu layer does not participate in the back propagation process*/
void ReluLayer::backPropagation() {
    previousLayer->backPropagation();
}

void ReluLayer::forwardPropagation(Matrix **input, int quantity) {
    for (int i = 0; i < quantity; ++i) {
        Matrix *localMatrix = input[i];
        for (int h = 0; h < localMatrix->getHeight(); h++) {
            for (int w = 0; w < localMatrix->getWidth(); w++) {
                localMatrix->setValues(h, w, fmax(0.0f, localMatrix->getValues(h, w)));
            }
        }
        outputFeatureMap[i]  = localMatrix;
    }
    std::cout << "Forward propagation termino sin problemas" << std::endl;
    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 2; ++i) {
            std::cout << outputFeatureMap[0]->getValues(j,i) << " ";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;
    std::cout << std::endl;
    nextLayer->forwardPropagation(input,quantity);
}

/*A Relu layer does not update it values*/
void ReluLayer::applyPropagationChanges(Matrix **input, int quantity) {
    nextLayer->applyPropagationChanges(outputFeatureMap,quantity);

}



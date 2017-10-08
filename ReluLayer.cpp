//
// Created by belisariops on 9/25/17.
//

#include <cmath>
#include <cstdlib>
#include "ReluLayer.h"

void ReluLayer::buildRandomLayer(int minValues, int maxValues) {

}

/*A Relu layer does not participate in the back propagation process*/
void ReluLayer::backPropagation() {
    previousLayer->backPropagation();
}

void ReluLayer::forwardPropagation(Matrix *input, int quantity) {
    for (int i = 0; i < quantity; ++i) {
        Matrix localMatrix = input[i];
        for (int h = 0; h < localMatrix.getHeight(); ++h) {
            for (int w = 0; w < localMatrix.getWidth(); ++w) {
                localMatrix.setValues(h,w,fmax(0.0f,localMatrix.getValues(h,w)));
            }
        }
        outputFeatureMap[quantity] = localMatrix;
    }
    nextLayer->forwardPropagation(input,quantity);
}

/*A Relu layer does not update it values*/
void ReluLayer::applyPropagationChanges(Matrix *input, int quantity) {
    nextLayer->applyPropagationChanges(outputFeatureMap,quantity);

}

ReluLayer::ReluLayer(int channels) {
    outputFeatureMap = (Matrix *)malloc(channels * sizeof(Matrix));

}

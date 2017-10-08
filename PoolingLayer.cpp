//
// Created by belisariops on 9/25/17.
//

#include "PoolingLayer.h"



PoolingLayer::PoolingLayer(int windowHeight, int windowWidth) {
    this->windowHeight = windowHeight;
    this->windowWidth = windowWidth;
}

void PoolingLayer::buildRandomLayer(int minValues, int maxValues) {

}

void PoolingLayer::backPropagation() {

}

void PoolingLayer::forwardPropagation(Matrix *input, int quantity) {
    Matrix output[quantity];
    for (int i = 0; i < quantity; ++i) {
        Matrix localInput = input[i];
        int height = localInput.getHeight() - windowHeight + 1;
        int width = localInput.getWidth() - windowWidth + 1;
        Matrix outputMatrix = Matrix(height,width);
        for (int h = 0; h < height; ++h) {
            for (int w = 0; w < width; ++w) {
                double maxValue = 0;
                for (int j = 0; j < windowHeight; ++j) {
                    for (int k = 0; k < windowWidth; ++k) {
                        if (maxValue < localInput.getValues(j,k))
                            maxValue = localInput.getValues(j,k);
                    }
                }
                outputMatrix.setValues(h,w,maxValue);
            }
        }
    }
    forwardPropagation(output,quantity);
}

void PoolingLayer::applyPropagationChanges(Matrix *input, int quantity) {
    applyPropagationChanges(input,quantity);
}

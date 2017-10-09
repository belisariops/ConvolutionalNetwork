//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_POOLINGLAYER_H
#define CONVOLUTIONALNETWORK_POOLINGLAYER_H


#include "NeuralLayer.h"

class PoolingLayer : public NeuralLayer {
public:
    PoolingLayer(int windowHeight, int windowWidth, int channels,int inputHeight, int inputWidth);
    void buildRandomLayer(int minValues,int maxValues) override ;
    void backPropagation() override ;
    void forwardPropagation(Matrix **input, int quantity) override ;
    void applyPropagationChanges(Matrix **input, int quantity) override ;

private:
    int windowHeight;
    int windowWidth;
};


#endif //CONVOLUTIONALNETWORK_POOLINGLAYER_H

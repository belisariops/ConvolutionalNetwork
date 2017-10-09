//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_RELULAYER_H
#define CONVOLUTIONALNETWORK_RELULAYER_H


#include "NeuralLayer.h"

class ReluLayer : public NeuralLayer {
public:
    ReluLayer(int channels);
    void buildRandomLayer(int minValues,int maxValues) override ;
    void backPropagation() override ;
    void forwardPropagation(Matrix **input, int quantity) override ;
    void applyPropagationChanges(Matrix **input, int quantity) override ;
};


#endif //CONVOLUTIONALNETWORK_RELULAYER_H

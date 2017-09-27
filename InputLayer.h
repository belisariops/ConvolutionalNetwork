//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_INPUTLAYER_H
#define CONVOLUTIONALNETWORK_INPUTLAYER_H


#include "NeuralLayer.h"

class InputLayer : NeuralLayer{
public:
    InputLayer(int width,int height);
    double *getOutput(std::vector<double> input);
    int getWidth();
    int getHeight();
    void buildRandomLayer();
    void backPropagation();
    void forwardPropagation();
private:
    NeuralLayer *nextLayer;
    int height;
    int width;
};


#endif //CONVOLUTIONALNETWORK_INPUTLAYER_H

//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_INPUTLAYER_H
#define CONVOLUTIONALNETWORK_INPUTLAYER_H


#include "NeuralLayer.h"
#include "Filter.h"

class InputLayer : NeuralLayer{
public:
    InputLayer(int width,int height);
    double *getOutput(std::vector<double> input);
    int getWidth();
    int getHeight();
    void getOutput();
    void buildRandomLayer();
    void backPropagation();
private:
    NeuralLayer *nextLayer;
    int height;
    int width;
};


#endif //CONVOLUTIONALNETWORK_INPUTLAYER_H

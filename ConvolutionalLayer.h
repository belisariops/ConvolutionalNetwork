//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H
#define CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H


#include "NeuralLayer.h"

class ConvolutionalLayer : NeuralLayer {
public:
    ConvolutionalLayer(int kernelHeight,int kernelWidth,int kernelQuantity,int inputHeight, int inputWidth);
    ~ConvolutionalLayer();
    void buildRandomLayer(int minValues, int maxValues) override;
    void backPropagation() override;
    void forwardPropagation(Matrix *input, int quantity);
    void updateWeights(Matrix *input, int quantity);
    void updateDeltas();
private:
};


#endif //CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H

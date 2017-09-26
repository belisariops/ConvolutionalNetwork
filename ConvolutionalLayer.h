//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H
#define CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H


#include "NeuralLayer.h"

class ConvolutionalLayer : NeuralLayer {
private:
    std::vector<std::vector<double>> kernels;
public:
    ConvolutionalLayer(int kernelWidth, int kernelHeight,int kernelQuantity);
};


#endif //CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H

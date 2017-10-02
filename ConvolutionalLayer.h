//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H
#define CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H


#include "NeuralLayer.h"

class ConvolutionalLayer : NeuralLayer {
private:
    std::vector<FeatureMap *> calcOutput(std::vector<FeatureMap *> input);
    std::vector<Filter *> kernels;
    std::vector<double> output;

public:
    ConvolutionalLayer(int kernelWidth, int kernelHeight,int kernelQuantity);
    void buildRandomLayer();
    void backPropagation();
    void forwardPropagation(std::vector<FeatureMap *> input);
    void updateWeights(FeatureMap *input);
    void updateDeltas();
    std::vector<Filter *> getKernels();
};


#endif //CONVOLUTIONALNETWORK_CONVOLUTIONALLAYER_H

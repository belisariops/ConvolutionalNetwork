//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H
#define CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H


#include "NeuralLayer.h"
#include "SigmoidNeuron.h"

class FullyConnectedLayer : NeuralLayer {

private:
    std::vector<SigmoidNeuron> neurons;
};


#endif //CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H

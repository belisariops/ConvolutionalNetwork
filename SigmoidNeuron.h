//
// Created by belisariops on 26-09-17.
//

#ifndef CONVOLUTIONALNETWORK_SIGMOIDNEURON_H
#define CONVOLUTIONALNETWORK_SIGMOIDNEURON_H


#include "Neuron.h"

class SigmoidNeuron : public Neuron {
public:
    SigmoidNeuron(double delta, double bias, double learningRate);
    void setWeights(std::vector<double> weights);
    void updateWeights(std::vector<double> inputs);
    void setRandomWeights(int numberOfWeights,int minValue,int maxValue);
    double getOutput(double input[]);
private:

};


#endif //CONVOLUTIONALNETWORK_SIGMOIDNEURON_H

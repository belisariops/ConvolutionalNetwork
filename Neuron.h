//
// Created by belisariops on 9/23/17.
//

#ifndef CONVOLUTIONALNETWORK_NEURON_H
#define CONVOLUTIONALNETWORK_NEURON_H


#include <vector>

class Neuron {
public:
    Neuron(double delta, double bias, double learningRate);
    void setLearningRate(double learningRate);
    void setBias(double bias);
    void setDelta(double delta);
    virtual void setRandomWeights(int numberOfWeights,int minValue,int maxValue)= 0;
    virtual void updateWeights(std::vector<double> inputs) = 0;
    void updateBias();
    virtual double getOutput(double input[])= 0;


protected:
    double delta;
    double bias;
    double learningRate;


};


#endif //CONVOLUTIONALNETWORK_NEURON_H

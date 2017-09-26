//
// Created by belisariops on 9/23/17.
//

#ifndef CONVOLUTIONALNETWORK_NEURON_H
#define CONVOLUTIONALNETWORK_NEURON_H


#include <vector>

class Neuron {
public:
    void setWeights(std::vector<double> weights);
    void setLearningRate(double learningRate);
    void setBias(double bias);
    void setDelta(double delta);
    void setRandomWeights(int numberOfWeights,int minValue,int maxValue);
    void updateWeights();
    void updateBias();
    virtual double getOutput(double input[]);



private:
    std::vector<double> inputs;
    std::vector<double> weights;
    double delta;
    double bias;
    double learningRate;


};


#endif //CONVOLUTIONALNETWORK_NEURON_H

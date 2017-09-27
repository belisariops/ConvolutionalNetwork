//
// Created by belisariops on 26-09-17.
//

#include <ctime>
#include <cmath>
#include "SigmoidNeuron.h"
#include "RandomGenerator.h"

SigmoidNeuron::SigmoidNeuron(double delta, double bias, double learningRate) : Neuron(delta, bias, learningRate) {}

void SigmoidNeuron::setWeights(std::vector<double> weights) {
    this->weights = weights;
}

void SigmoidNeuron::updateWeights(std::vector<double> inputs) {
    for (int i =0; i < this->weights.size(); i++)
        this->weights[i] += this->learningRate * this->delta * inputs[i];
}

void SigmoidNeuron::setRandomWeights(int numberOfWeights, int minValue, int maxValue) {
    RandomGenerator* generator = new RandomGenerator((unsigned int)time(0));
    for (int i=0; i < numberOfWeights; i++)
        this->weights.push_back(generator->randomBetween(minValue,maxValue));

}

double SigmoidNeuron::getOutput(double *input) {
    double z = 0;
    for (int i=0; i<this->weights.size(); i++)
        z += this->weights[i]*input[i];
    z += this->bias;
    return 1.0f/(1.0f + exp(-z));

}


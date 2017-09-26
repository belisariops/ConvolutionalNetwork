//
// Created by belisariops on 9/23/17.
//

#include <cstdlib>
#include "Neuron.h"

void Neuron ::setBias(double bias) {
    this->bias = bias;
}

void Neuron ::setDelta(double delta) {
    this->delta = delta;
}

void Neuron ::setLearningRate(double learningRate) {
    this->learningRate = learningRate;
}

void Neuron ::setWeights(std::vector<double> weights) {
    this->weights = weights;
}

double fRand(double fMin, double fMax)
{
    double f = (double)std::rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

void Neuron ::setRandomWeights(int numberOfWeights, int minValue, int maxValue) {
    this->weights.clear();
    //this->weights.reserve(numberOfWeights);
    for (int i=0; i < numberOfWeights; i++)
        this->weights.push_back(fRand(minValue,maxValue));

}

void Neuron::updateWeights() {
    int i =0;
    for (double weight : this->weights)
        weight += this->learningRate*this->delta*this->inputs[i++];
}

void Neuron::updateBias() {
    this->bias += this->learningRate*this->delta;

}


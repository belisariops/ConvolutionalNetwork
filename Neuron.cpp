//
// Created by belisariops on 9/23/17.
//

#include <cstdlib>
#include "Neuron.h"

Neuron::Neuron(double delta, double bias, double learningRate) : delta(delta),bias(bias),learningRate(learningRate) {

}

void Neuron ::setBias(double bias) {
    this->bias = bias;
}

void Neuron ::setDelta(double delta) {
    this->delta = delta;
}

void Neuron ::setLearningRate(double learningRate) {
    this->learningRate = learningRate;
}

void Neuron::updateBias() {
    this->bias += this->learningRate*this->delta;

}

double Neuron::getWeight(int index) {
    return weights[index];
}

double Neuron::getDelta() {
    return delta;
}


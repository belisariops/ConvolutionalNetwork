//
// Created by belisariops on 9/25/17.
//

#include <cstdlib>
#include <ctime>
#include "FullyConnectedLayer.h"
#include "RandomGenerator.h"

void FullyConnectedLayer::buildRandomLayer(int minValues, int maxValues) {

}

void FullyConnectedLayer::backPropagation() {
    double error = 0;
    for (SigmoidNeuron neuron : neurons) {
        //TODO por cada clase o neurona de la siguiente capa
        int index = 0;
        for (SigmoidNeuron nextLayerNeuron : nextLayer->neurons) {
            error += nextLayerNeuron.getWeight(index)*nextLayerNeuron.getDelta();
            index++;
        }
        neuron.setDelta(error * transferDerivative(neuron.getOutput()))
    }

}

void FullyConnectedLayer::forwardPropagation(Matrix *input, int quantity) {

}

void FullyConnectedLayer::applyPropagationChanges(Matrix *input, int quantity) {

}

FullyConnectedLayer::FullyConnectedLayer(int numNeurons, double learningRate) {
    RandomGenerator generator = RandomGenerator(time(0));
    for (int i = 0; i < numNeurons; ++i) {
        SigmoidNeuron neuron = SigmoidNeuron(0,generator.randomBetween(-2,2),learningRate);
        neuron.setRandomWeights(numNeurons,-1,1);
        neurons.push_back(neuron);
    }
}

FullyConnectedLayer::~FullyConnectedLayer() {

}

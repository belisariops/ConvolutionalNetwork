//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include "FeatureMap.h"
#include "Filter.h"

FeatureMap::FeatureMap(unsigned long width, unsigned long height) : Matrix(width,height) {
    for (int w = 0; w < width; ++w) {
        std::vector<NeuronStructure *> line;
        for (int h = 0; h < height; ++h) {
            NeuronStructure *neuron = new NeuronStructure;
            neuron->delta = 0;
            neuron->output = 0;
            line.push_back(neuron);
        }
        this->neurons.push_back(line);
    }

}



FeatureMap::~FeatureMap(){
    for (int w = 0; w < neurons.size(); ++w) {
        for (int h =(this->neurons[w].size() - 1); h >= 0; ++h) {
            NeuronStructure *neuron = this->neurons[w][h];
            this->neurons[w].pop_back();
            free(neuron);
        }
        this->neurons[w].clear();
    }
}

Filter *FeatureMap::calculateDeltasForPreviousLayer(Filter *filter) {
    for (int w = 0; w < filter->getWidth(); w++) {
        for (int h=0; h < filter->getHeight(); h++)
            std::cout << filter->getDeltaValue(w,h);
        std::cout << std::endl;
    }
    Filter *rotWeights = filter->rot();
    for (int w = 0; w < filter->getWidth(); w++) {
        for (int h=0; h < filter->getHeight(); h++)
            std::cout << rotWeights->getValue(w,h);
        std::cout << std::endl;
    }

    Filter *convResult = rotWeights->conv(filter->getDeltas());
    //convResult->transferDerivative(this);
    //delete rotWeights;
    return new Filter(2,2);
}

void FeatureMap::setOutput(int width, int height, double value) {
    this->neurons[width][height]->output = value;
}

void FeatureMap::setDelta(int width, int height, double value) {
    this->neurons[width][height]->delta = value;
}

void FeatureMap::rotDeltas() {


}



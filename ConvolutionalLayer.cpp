//
// Created by belisariops on 9/25/17.
//

#include <ctime>
#include "ConvolutionalLayer.h"
#include "RandomGenerator.h"

ConvolutionalLayer::ConvolutionalLayer(int kernelWidth,int kernelHeight,int kernelQuantity) {
    int totalWeightsPerKernel = kernelWidth*kernelHeight;
    //this->kernels.reserve(kernelQuantity);
    RandomGenerator *generator = new RandomGenerator((unsigned int) time(0));
    for (int j=0; j < kernelQuantity; j++) {
        Filter *filter = new Filter(kernelWidth,kernelHeight);
        for (int w = 0; w < kernelWidth; w++) {
            for (int h = 0; h < kernelHeight; h++) {
                filter->setValue(w,h,generator->nextReal());
            }
        }
        this->kernels.push_back(filter);
    }
}

void ConvolutionalLayer::buildRandomLayer() {

}

void ConvolutionalLayer::backPropagation() {

}

void ConvolutionalLayer::forwardPropagation(std::vector<FeatureMap *> input) {
    std::vector<FeatureMap *> output = this->calcOutput(input);
    this->getNextLayer()->forwardPropagation(output);
}

std::vector<FeatureMap *> ConvolutionalLayer::calcOutput(std::vector<FeatureMap *> input) {
    std::vector<FeatureMap *> output;
    for (Filter* kernel : kernels) {
        //TODO Paralelizar
        for (FeatureMap *map : input) {
            FeatureMap *outMap = kernel->convMap(map);
            kernel->setFeatureMap(outMap);
            output.push_back(outMap);
        }
    }
    return output;
}

void ConvolutionalLayer::updateWeights(FeatureMap *input) {
    //puede ser que los valores de los pesos se sumen y no se cambien directamente
    for(Filter *filter : this->kernels) {
        Filter *rotDeltas = filter->rot();
        FeatureMap *result = rotDeltas->convMap(input);
        filter = new Filter(result->getValues());
        delete rotDeltas;
        delete result;
    }
}

void ConvolutionalLayer::updateDeltas() {
    std::vector<Filter *> nextLayerWeights = this->getNextLayer()->getKernels();
    for (int i = 0; i < this->kernels.size(); ++i) {
        Filter *w = nextLayerWeights[i];
        this->kernels[i] = w->calculateDeltasForPreviousLayer(this->kernels[i]->getFeatureMapOutput());
    }
}

std::vector<Filter *> ConvolutionalLayer::getKernels() {
    return this->kernels;
}



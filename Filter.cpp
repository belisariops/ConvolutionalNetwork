//
// Created by belisariops on 9/24/17.
//

#include <algorithm>
#include "Filter.h"

Filter::Filter(unsigned long width, unsigned long height) : Matrix(width,height) {
    for (int h = 0; h < height; ++h) {
        std::vector<double> line(width);
        this->deltas.push_back(line);
    }

}

Filter::~Filter() {

}

Filter* Filter::rot() {
    std::vector<std::vector<double>> rotDeltas;
    std::vector<std::vector<double>> rotHorizontal = this->deltas;
    std::reverse(rotHorizontal.begin(),rotHorizontal.end());
    for (std::vector<double> line : rotHorizontal) {
        std::vector myLine = line;
        std::reverse(myLine.begin(),myLine.end());
        rotDeltas.push_back(myLine);
    }
    return new Filter(rotDeltas);
}

Filter::Filter(std::vector<std::vector<double>> values) : Matrix(values[0].size(),values.size()){
    this->map = values;
}

void Filter::setDeltas(std::vector<std::vector<double>> newDeltas) {
    this->deltas = newDeltas;

}

Filter* Filter::calculateDeltasForPreviousLayer(FeatureMap *outputPreviousLayer) {
    Filter *rotWeights = this->rot();
    Filter *convResult = rotWeights->conv(this->deltas);
    convResult->transferDerivative(outputPreviousLayer);
    delete rotWeights;
    return convResult;
}

Filter * Filter::conv(std::vector<std::vector<double>> otherDeltas) {
    return nullptr;
}

FeatureMap *Filter::getFeatureMapOutput() {
    return this->output;
}

void Filter::setFeatureMap(FeatureMap *map) {
    this->output = map;
}

void Filter::transferDerivative(FeatureMap *pMap) {
    for (int i = 0; i < pMap->getValues().size() ;++i) {
        for (int j = 0; j < pMap->getValues()[i].size(); ++j) {
            double value = pMap->getValues()[i][j];
            pMap->setValue(i,j,value*this->output->map[i][j]*(1.0 - this->output->map[i][j]));
        }
    }

}




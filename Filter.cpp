//
// Created by belisariops on 9/24/17.
//

#include <algorithm>
#include <iostream>
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
        std::vector<double> myLine = line;
        std::reverse(myLine.begin(),myLine.end());
        rotDeltas.push_back(myLine);
    }
    return new Filter(rotDeltas);
}

Filter::Filter(std::vector<std::vector<double>> values) : Matrix(values[0].size(),values.size()){
    for (int i = 0; i < values.size(); ++i) {
        for (int j = 0; j < values[i].size(); ++j) {
            this->setValue(i,j,values[i][j]);
        }
    }
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
            pMap->setValue(i,j,value*getMap()[i][j]*(1.0 - getMap()[i][j]));
        }
    }

}

FeatureMap *Filter::convMap(FeatureMap *map) {
    unsigned long returnedMapWidth = this->getWidth() - this->getWidth() + 1;
    unsigned long returnedMapHeight = this->getHeight() - this->getHeight() + 1;
    FeatureMap *returnedMap = new FeatureMap(returnedMapWidth, returnedMapHeight);
    std::vector<std::vector<double>> values = returnedMap->getValues();
    double box;
    //TODO Paralelizar
    for (int i=0; i < returnedMapWidth; i++) {
        for (int j=0; j < returnedMapHeight; j++) {
            box = 0;
            for (int k=0; k < this->getWidth(); k++) {
                for (int l=0; l < this->getHeight(); l++) {
                    box += this->map[i+k][j+l] * this->getValues()[k][l];
                }
            }
            returnedMap->setValue(i,j,box);
        }
    }


    return returnedMap;
}

std::vector<std::vector<double>> Filter::getDeltas() {
    return this->deltas;
}

void Filter::setDeltaValue(int width, int height,double value) {
    this->deltas[width][height] = value;
}

double Filter::getDeltaValue(int width, int height) {
    return this->deltas[width][height];
}




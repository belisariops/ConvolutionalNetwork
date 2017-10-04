//
// Created by belisariops on 9/24/17.
//

#include "Filter.h"

Filter::Filter(int height, int width) {
    deltas = Matrix(height, width);
    kernel = Matrix(height, width);
}

Filter::~Filter() {

}

void Filter::setDeltaValue(int height, int width,double value) {
    deltas.setValues(height,width,value);
}

double Filter::getDeltaValue(int height, int width) {
    return deltas.getValues(height,width);
}

void Filter::setDeltas(double **newDeltas) {
    for (int h = 0; h < deltas.getHeight(); ++h) {
        for (int w = 0; w < deltas.getWidth(); ++w) {
             deltas.setValues(h,w,newDeltas[h][w]);
        }
    }
}




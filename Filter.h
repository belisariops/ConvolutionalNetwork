//
// Created by belisariops on 9/24/17.
//

#ifndef CONVOLUTIONALNETWORK_FILTER_H
#define CONVOLUTIONALNETWORK_FILTER_H

#include "Matrix.h"

class Filter {
public:
    Filter(int height, int width);
    ~Filter();
    void setDeltas(double **newDeltas);
    void setDeltaValue(int height, int width, double value);
    double getDeltaValue(int height,int width);
private:
    Matrix deltas;
    Matrix kernel;

};


#endif //CONVOLUTIONALNETWORK_FILTER_H

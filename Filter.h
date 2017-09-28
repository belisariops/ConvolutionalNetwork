//
// Created by belisariops on 9/24/17.
//

#ifndef CONVOLUTIONALNETWORK_FILTER_H
#define CONVOLUTIONALNETWORK_FILTER_H

#include <vector>
#include "Matrix.h"

class Filter : public Matrix {
public:
    Filter(unsigned long width, unsigned long height);
    ~Filter();

private:
    typedef Matrix super;
};


#endif //CONVOLUTIONALNETWORK_FILTER_H

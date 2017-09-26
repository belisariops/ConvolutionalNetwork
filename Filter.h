//
// Created by belisariops on 9/24/17.
//

#ifndef CONVOLUTIONALNETWORK_FILTER_H
#define CONVOLUTIONALNETWORK_FILTER_H

#include <vector>

class Filter {
    Filter();
    std::vector<std::vector<double>> getValues();
private:
    std::vector<std::vector<double>> tensor;
};


#endif //CONVOLUTIONALNETWORK_FILTER_H

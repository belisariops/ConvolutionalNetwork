//
// Created by belisariops on 9/23/17.
//

#ifndef CONVOLUTIONALNETWORK_NEURALLAYER_H
#define CONVOLUTIONALNETWORK_NEURALLAYER_H


#include <vector>

class NeuralLayer {
public:
    void getPreviousLayer();
    void getNextLayer();
    void setPreviousLayer(NeuralLayer layer);
    void setNextLayer(NeuralLayer layer);
    void connect(NeuralLayer layer);
protected:
    std::vector<double> getWeights();
    NeuralLayer previousLayer;
    NeuralLayer nextLayer;
    std::vector<double> weights;
};


#endif //CONVOLUTIONALNETWORK_NEURALLAYER_H

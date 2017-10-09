//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H
#define CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H


#include "NeuralLayer.h"
#include "SigmoidNeuron.h"

class FullyConnectedLayer : public NeuralLayer {
public:
    FullyConnectedLayer(int inputHeight,int inputWidth, int channels,int numNeurons,double learningRate);
    ~FullyConnectedLayer();
    virtual void buildRandomLayer(int minValues,int maxValues) override ;
    virtual void backPropagation() override ;
    virtual void forwardPropagation(Matrix **input, int quantity) override ;
    virtual void applyPropagationChanges(Matrix **input, int quantity) override ;
protected:
    double sigmoid(double x);
    void updateDeltas();
    void updateBias();
    void updateWeights(Matrix **input, int quantity);
    Matrix transformMatrixtoVector(Matrix **input, int quantity);
    std::vector<SigmoidNeuron> neurons;
    FullyConnectedLayer *nextLayer;
    Matrix *bias;
    int numNeurons;
    Matrix *output;
    double learningRate;
};


#endif //CONVOLUTIONALNETWORK_FULLYCONNECTEDLAYER_H

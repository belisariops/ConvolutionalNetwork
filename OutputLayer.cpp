//
// Created by belisariops on 10/9/17.
//

#include <iostream>
#include "OutputLayer.h"

OutputLayer::OutputLayer(int inputHeight, int inputWidth, int channels, int numOutputs, double learningRate)
        : FullyConnectedLayer(inputHeight, inputWidth, channels, numOutputs, learningRate) {

}

void OutputLayer::forwardPropagation(Matrix **input, int quantity) {
    Matrix inputVector = transformMatrixtoVector(input,quantity);
    std::cout << std::endl;
    for (int k = 0; k < 4; ++k) {
        std::cout<< inputVector.getValues(k,1)<<std::endl;
    }

    std::cout << std::endl;
    for (int k = 0; k < 4; ++k) {
        std::cout<< kernels[0]->getValues(k,1)<<std::endl;
    }
    std::cout << std::endl;
    double z;
    /*Se dara de output un vector (matriz de nx1)*/
    for (int n = 0; n < numNeurons; ++n) {
        Matrix neuronVector = inputVector^(*kernels[n]);
        z = neuronVector.sumValues() + bias->getValues(n,1);
        outputFeatureMap[0]->setValues(n,1,sigmoid(z));
    }

    for (int j = 0; j < outputFeatureMap[0]->getHeight(); ++j) {
        for (int i = 0; i < outputFeatureMap[0]->getWidth(); ++i) {
            std::cout << outputFeatureMap[0]->getValues(j,i) << " ";
        }
        std::cout << std::endl;

    }
    std::cout << std::endl;
    std::cout << std::endl;
}



/*expectedOutput is a Vector (nx1)*/
void OutputLayer::propagate(Matrix *expectedOutput) {
    Matrix error = ((*expectedOutput) - (*outputFeatureMap[0]));
    for (int n = 0; n < numNeurons; ++n) {
        double output = outputFeatureMap[0]->getValues(n,1);
        deltas[0]->setValues(n,1,error.getValues(n,1) * (output *(1.0 - output)));
    }
    previousLayer->backPropagation();
}

Matrix *OutputLayer::getOutput() {
    return outputFeatureMap[0];
}

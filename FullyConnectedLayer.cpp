//
// Created by belisariops on 9/25/17.
//

#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
#include "FullyConnectedLayer.h"
#include "RandomGenerator.h"




void FullyConnectedLayer::buildRandomLayer(int minValues, int maxValues) {
    RandomGenerator generator = RandomGenerator((unsigned int)time(0));
   //TODO no funciona
//    for (int i = 0; i < numNeurons; ++i) {
//        std::cout << "::::::::::" << std::endl;
//        for (int j = 0; j < kernels[i]->getHeight(); ++j) {
//            std::cout << kernels[i]->getValues(j,1)<<std::endl;
//        }
//        std::cout << std::endl;
//        kernels[i]->setRandomValues(minValues, maxValues);
//        for (int j = 0; j < kernels[i]->getHeight(); ++j) {
//            std::cout << kernels[i]->getValues(j,1)<<std::endl;
//        }
//    }
    for (int n = 0; n < numNeurons; ++n) {
        for (int h = 0; h < kernels[n]->getHeight(); ++h) {
            kernels[n]->setValues(h,1,generator.randomBetween(minValues,maxValues));
        }
        bias->setValues(n,1,generator.randomBetween(-3,3));
    }


}

void FullyConnectedLayer::backPropagation() {
   updateDeltas();
    previousLayer->backPropagation();
//    double error = 0;
//    for (SigmoidNeuron neuron : neurons) {
//        //TODO por cada clase o neurona de la siguiente capa
//        int index = 0;
//        for (SigmoidNeuron nextLayerNeuron : nextLayer->neurons) {
//            error += nextLayerNeuron.getWeight(index)*nextLayerNeuron.getDelta();
//            index++;
//        }
//        neuron.setDelta(error * transferDerivative(neuron.getOutput()))
//    }

}

void FullyConnectedLayer::forwardPropagation(Matrix **input, int quantity) {
    Matrix inputVector = transformMatrixtoVector(input,quantity);
    double z;
    /*Se dara de output un vector (matriz de nx1)*/
    for (int n = 0; n < numNeurons; ++n) {
        z=0;
        for (int h = 0; h < inputVector.getHeight(); ++h) {
            z += inputVector.getValues(h,1)*kernels[n]->getValues(n,1);
        }
        z += bias->getValues(n,1);
        outputFeatureMap[0]->setValues(n,1,sigmoid(z));
    }

    nextLayer->forwardPropagation(outputFeatureMap,1);
}

void FullyConnectedLayer::applyPropagationChanges(Matrix **input, int quantity) {
    updateWeights(input,quantity);
    updateBias();

}

FullyConnectedLayer::FullyConnectedLayer(int inputHeight,int inputWidth, int channels,int numNeurons,double learningRate)  {
    this->numNeurons = numNeurons;
    kernels = new Matrix*[numNeurons];
    deltas = new Matrix*[1];
    deltas[0] = new Matrix(numNeurons,1);
    outputFeatureMap  = new Matrix*[1];
    outputFeatureMap[0] = new Matrix(numNeurons,1);
    bias = new Matrix(numNeurons,1);
    /*The weights and deltas are going to be a vector*/
    for (int i = 0; i < numNeurons; ++i) {
        kernels[i] = new Matrix(inputHeight*inputWidth*channels,1);
    }
    this->learningRate = learningRate;

//    this->numNeurons = width * height;
//    kernels = (Matrix *)malloc(numNeurons * sizeof(Matrix));
//    deltas = (Matrix *)malloc(numNeurons * sizeof(Matrix));
//    outputFeatureMap = new Matrix(numNeurons,1);
//    for (int k = 0; k < numNeurons; ++k) {
//        kernels[k] = Matrix(height,width);
//        outputFeatureMap[k] = Matrix(,outputWidth);
//        deltas[k] = Matrix(outputHeight,outputWidth);
//    }
//    inputFeatureMap = (Matrix *)malloc(kernelQuantity * sizeof(Matrix));
}

FullyConnectedLayer::~FullyConnectedLayer() {

}

void FullyConnectedLayer::updateDeltas() {
    double error;
    for (int n = 0; n < numNeurons; ++n) {
        error  = 0;
        for (int i = 0; i < nextLayer->numNeurons; ++i) {
            error += ((*nextLayer->kernels[i])^(*nextLayer->deltas[i])).sumValues();
        }
        double output = outputFeatureMap[0]->getValues(n,1);
        deltas[0]->setValues(n,1,error*(output * (1.0 - output)));
    }

}

void FullyConnectedLayer::updateBias() {
    for (int n = 0; n < numNeurons; ++n) {
        bias->setValues(n,1, bias->getValues(n,1) + learningRate*deltas[0]->getValues(n,1));
    }
}

void FullyConnectedLayer::updateWeights(Matrix **input,int quantity) {
    Matrix inputVector = transformMatrixtoVector(input,quantity);
    for (int n = 0; n < numNeurons; ++n) {
        for (int i = 0; i < kernels[n]->getHeight(); ++i) {
            kernels[n]->setValues(i,1,learningRate*deltas[0]->getValues(n,1)*inputVector.getValues(i,1));
        }
    }
}

Matrix FullyConnectedLayer::transformMatrixtoVector(Matrix **input, int quantity) {
    int rowIndex = 0;
    Matrix inputVector = Matrix(quantity*input[0]->getWidth()*input[0]->getHeight(),1);
    /*The input is transform to a vector*/
    for (int i = 0; i < quantity; ++i) {
        Matrix *localMatrix = input[i];
        for (int h = 0; h < localMatrix->getHeight(); ++h) {
            for (int w = 0; w < localMatrix->getWidth(); ++w) {
                inputVector.setValues(rowIndex,1,localMatrix->getValues(h,w));
                rowIndex++;
            }
        }
    }

    return inputVector;

}

double FullyConnectedLayer::sigmoid(double x) {
    return 1/(1 - exp(x));
}



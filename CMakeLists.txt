cmake_minimum_required(VERSION 3.8)
project(ConvolutionalNetwork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Neuron.cpp Neuron.h NeuralLayer.cpp NeuralLayer.h Filter.cpp Filter.h ConvolutionalLayer.cpp ConvolutionalLayer.h ConvolutionalNeuron.cpp ConvolutionalNeuron.h RandomGenerator.cpp RandomGenerator.h ConvolutionalNeuralNetwork.cpp ConvolutionalNeuralNetwork.h PoolingLayer.cpp PoolingLayer.h InputLayer.cpp InputLayer.h FullyConnectedLayer.cpp FullyConnectedLayer.h ReluLayer.cpp ReluLayer.h SigmoidNeuron.cpp SigmoidNeuron.h FeatureMap.cpp FeatureMap.h Matrix.cpp Matrix.h NeuronStructure.h)
add_executable(ConvolutionalNetwork ${SOURCE_FILES})
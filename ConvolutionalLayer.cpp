//
// Created by belisariops on 9/25/17.
//

#include <ctime>
#include "ConvolutionalLayer.h"
#include "RandomGenerator.h"

ConvolutionalLayer::ConvolutionalLayer(int kernelWidth,int kernelHeight,int kernelQuantity) {
    int totalWeightsPerKernel = kernelWidth*kernelHeight;
    this->kernels.reserve(kernelQuantity);
    RandomGenerator *generator = new RandomGenerator((unsigned int) time(0));
    for (int j=0; j < kernelQuantity; j++) {
        this->kernels[j].reserve(totalWeightsPerKernel);
        for (int i = 0; i < totalWeightsPerKernel; i++) {
            this->kernels[i].push_back(generator->nextReal());
        }
    }
}

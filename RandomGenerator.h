//
// Created by belisariops on 9/25/17.
//

#ifndef CONVOLUTIONALNETWORK_RANDOMGENERATOR_H
#define CONVOLUTIONALNETWORK_RANDOMGENERATOR_H


#include <climits>

class RandomGenerator {
private:
    unsigned int seed[4];
    const float coefficient;
    const float coefficient2;
public:

    RandomGenerator(const unsigned int initial_seed);
    ~RandomGenerator();
    int nextInt();
    double nextReal();

    double normal();

};


#endif //CONVOLUTIONALNETWORK_RANDOMGENERATOR_H

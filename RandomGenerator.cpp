//
// Created by belisariops on 9/25/17.
//

#include "RandomGenerator.h"
#include <cmath>
const double PI = 4.0 * atan(1.0);

RandomGenerator::~RandomGenerator() {

}

int RandomGenerator::nextInt() {
    const unsigned int t = seed[0] ^ (seed[0] << 11);
    seed[0] = seed[1];
    seed[1] = seed[2];
    seed[2] = seed[3];
    return seed[3] = (seed[3] ^ (seed[3] >> 19)) ^ (t ^ (t >> 8));
}

double RandomGenerator::randomBetween(int lowerBound,int upperBound) {
    return (double)lowerBound + (double)(upperBound - lowerBound)*nextReal();
}

double RandomGenerator::nextReal() {
    return (double)nextInt() * coefficient;
}

double RandomGenerator::normal() {
    const double r1 = nextReal();
    const double r2 = nextReal();
    return sqrt(-2.0 * log(r1)) * sin(2.0 * PI * r2);
}

RandomGenerator::RandomGenerator(const unsigned int initial_seed) :
        coefficient(1.0f / UINT_MAX), coefficient2(1.0f / 16777216.0f) {
    unsigned int s = initial_seed;
    for (int i = 1; i <= 4; i++) {
        seed[i - 1] = s = 1812433253U * (s ^ (s >> 30)) + i;
    }
}



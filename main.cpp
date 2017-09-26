#include <iostream>
#include "RandomGenerator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    RandomGenerator* generator = new RandomGenerator((unsigned int)time(0));
    std::cout << generator->nextInt() << std::endl;
    for (int i=0; i<10;i++)
        std::cout << generator->nextReal() << std::endl;
    std::cout << generator->normal() << std::endl;
    return 0;
}
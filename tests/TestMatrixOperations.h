//
// Created by belisariops on 05-10-17.
//

#ifndef CONVOLUTIONALNETWORK_TESTMATRIXOPERATIONS_H
#define CONVOLUTIONALNETWORK_TESTMATRIXOPERATIONS_H


#include "Test.h"
#include "../Matrix.h"

class TestMatrixOperations : Test{
public:
    TestMatrixOperations();
    void testGettersAndSetters();
    void testSum();
    void testConvolution();
    /*Catch library (for test) needs public static variables*/
    static Matrix matrixA;
    static Matrix matrixB;
};


#endif //CONVOLUTIONALNETWORK_TESTMATRIXOPERATIONS_H

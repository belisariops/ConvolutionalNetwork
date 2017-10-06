//
// Created by belisariops on 05-10-17.
//
#define CATCH_CONFIG_MAIN
#include "../Matrix.h"
#include "../catch/catch.hpp"

Matrix matrixA,matrixB;

void setUp() {
    matrixA = Matrix(3,3);
    matrixB = Matrix(2,2);
    double value = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrixA.setValues(i,j,value);
            value++;
        }
    }
    value=1;
    for (int k = 0; k < 2; ++k) {
        for (int h = 0; h < 2; ++h) {
            matrixB.setValues(k,h,value);
            value ++;
        }
    }
}

TEST_CASE( "Matrix getters and setters", "[MatrixGetterSetters]" ) {
    setUp();
    REQUIRE( matrixA.getWidth() == 3 );
    REQUIRE( matrixB.getHeight() == 2 );
    REQUIRE( matrixA.getValues(0,0) == 1 );
    REQUIRE( matrixA.getValues(0,2) == 3 );
    REQUIRE( matrixA.getValues(1,1) == 5 );
    REQUIRE( matrixA.getValues(1,2) == 6 );
    REQUIRE( matrixA.getValues(2,2) == 9 );
    REQUIRE( matrixB.getValues(0,0) == 1 );
    REQUIRE( matrixB.getValues(0,1) == 2 );
    REQUIRE( matrixB.getValues(1,0) == 3 );
    REQUIRE( matrixB.getValues(1,1) == 4 );
}

TEST_CASE( "Matrix sum", "[MatrixSum]" ) {
    setUp();
    /*To sum two matrices they need to be of the same size*/
    Matrix matrixC = matrixA+matrixA;
    REQUIRE( matrixC.getValues(0,0) == 2 );
    REQUIRE( matrixC.getValues(0,1) == 4 );
    REQUIRE( matrixC.getValues(0,2) == 6 );
    REQUIRE( matrixC.getValues(1,0) == 8 );
    REQUIRE( matrixC.getValues(1,1) == 10 );
    REQUIRE( matrixC.getValues(1,2) == 12 );
    REQUIRE( matrixC.getValues(2,0) == 14 );
    REQUIRE( matrixC.getValues(2,1) == 16 );
    REQUIRE( matrixC.getValues(2,2) == 18 );
}

TEST_CASE( "Matrix correlation", "[MatrixCorrelation]" ) {
    setUp();
    /*First a correlation is test*/
    Matrix matrixC = matrixA*matrixB;
    REQUIRE( matrixC.getValues(0,0) == 37 );
    REQUIRE( matrixC.getValues(0,1) == 47 );
    REQUIRE( matrixC.getValues(1,0) == 67 );
    REQUIRE( matrixC.getValues(1,1) == 77 );
}

TEST_CASE( "Matrix convolution", "[MatrixConvolution]" ) {
    setUp();
    matrixB.rot();
    Matrix matrixC = matrixA*matrixB;

    for (int i = 0; i <2 ; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << matrixC.getValues(i,j)<< " ";
        }
        std::cout << std::endl;

    }
    REQUIRE( matrixC.getValues(0,0) == 23 );
    REQUIRE( matrixC.getValues(0,1) == 33 );
    REQUIRE( matrixC.getValues(1,0) == 53 );
    REQUIRE( matrixC.getValues(1,1) == 63 );

}


//
// Created by belisariops on 05-10-17.
//

#include "TestMatrixOperations.h"



TestMatrixOperations::TestMatrixOperations() {
    this->matrixA = Matrix(3,3);
    this->matrixB = Matrix(2,2);
    double value = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrixA.setValues(i,j,value);
            value++;
        }
    }

    for (int k = 0; k < 2; ++k) {
        for (int h = 0; h < 2; ++h) {
            matrixB.setValues(k,h,value);
            value ++;
        }
    }
    /* ------------------------------------------------------
    TEST_CASE( "Factorials are computed", "[factorial]" ) {
        REQUIRE( Factorial(1) == 1 );
        REQUIRE( Factorial(2) == 2 );
        REQUIRE( Factorial(3) == 6 );
        REQUIRE( Factorial(10) == 3628800 );
    }
       ------------------- Test de Ejemplo -----------------*/

}

void TestMatrixOperations::testGettersAndSetters() {
    TEST_CASE( "Matrix getters and setters", "[MatrixGetterSetters]" ) {
        REQUIRE( matrixA.getWidth() == 3 );
        REQUIRE( matrixB.getHeight() == 2 );
        REQUIRE( matrixA.getValues(0,0) == 1 );
        REQUIRE( matrixA.getValues(0,2) == 3 );
        REQUIRE( matrixA.getValues(1,1) == 5 );
        REQUIRE( matrixA.getValues(1,2) == 6 );
        REQUIRE( matrixA.getValues(2,2) == 9 );
        REQUIRE( matrixB.getValues(0,0) == 10 );
        REQUIRE( matrixB.getValues(0,1) == 11 );
        REQUIRE( matrixB.getValues(1,0) == 12 );
        REQUIRE( matrixB.getValues(1,1) == 13 );
    }

}


}

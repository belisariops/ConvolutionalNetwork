//
// Created by belisariops on 9/27/17.
//

#ifndef CONVOLUTIONALNETWORK_MATRIX_H
#define CONVOLUTIONALNETWORK_MATRIX_H


#include <vector>

class Matrix {
public:
    Matrix();
    Matrix(int h, int w);
    Matrix(const Matrix& other);
    int getWidth()const;
    int getHeight()const;
    Matrix& operator= (const Matrix& other);
    Matrix operator* (const Matrix& other) const;
    Matrix operator+ (const Matrix& other) const;
    Matrix operator+= (const Matrix& other) const;
    Matrix operator- (const Matrix& other) const;
    Matrix operator^ (const Matrix& other) const;
    void setValues(int height,int width,double value);
    double getValues(int height,int width);
    void rot();
    virtual ~Matrix();
    void setRandomValues(int min, int max);
    void applyTransfereDerivative();

    double sumValues();

    double **getMatrixValues();

private:
    int h,w;
    double** values;
    bool rotated;

};


#endif //CONVOLUTIONALNETWORK_MATRIX_H

//
// Created by belisariops on 9/27/17.
//

#ifndef CONVOLUTIONALNETWORK_MATRIX_H
#define CONVOLUTIONALNETWORK_MATRIX_H


#include <vector>

class Matrix {
public:
    Matrix();
    Matrix(unsigned long h, unsigned long w);
    unsigned long getWidth()const;
    unsigned long getHeight()const;
    std::vector<std::vector<double>> getValues();
    void setValue(int widthPosition,int heightPosition,double value);
    double getValue(int widthPosition, int heightPosition);
    std::vector<std::vector<double>> getMap();
    Matrix operator* (const Matrix& other);
    void setValues(int height,int width,double value);
    double getValues(int height,int width);
    void rot();
    virtual ~Matrix();

private:
    unsigned long h,w;
    double** values;
    bool rotated;

protected:
    std::vector<std::vector<double>> map;
};


#endif //CONVOLUTIONALNETWORK_MATRIX_H

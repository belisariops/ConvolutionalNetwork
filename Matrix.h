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
    virtual ~Matrix();

private:
    unsigned long h,w;

protected:
    std::vector<std::vector<double>> map;
};


#endif //CONVOLUTIONALNETWORK_MATRIX_H

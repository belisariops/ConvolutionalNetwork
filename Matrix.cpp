//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include "Matrix.h"

Matrix::Matrix(unsigned long h, unsigned long w) {
    std::vector<double> a(0,h);
    for (int i =0; i < w; i++) {
        std:: vector<double> vec;
        for (int j = 0; j < h; j++)
            vec.push_back(0);
        this->map.push_back(vec);

    }
    this->w = w;
    this->h = h;


}

Matrix::~Matrix() {
    for (std::vector<double> x : this->map)
        x.clear();
    this->map.clear();
}

Matrix::Matrix() {
}

unsigned long Matrix::getWidth()const {
    return w;
}

unsigned long Matrix::getHeight()const {
    return h;
}

std::vector<std::vector<double>> Matrix::getValues() {
    return map;

}

void Matrix::setValue(int widthPosition, int heightPosition, double value) {
    this->map[widthPosition][heightPosition] = value;

}



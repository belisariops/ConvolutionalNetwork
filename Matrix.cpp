//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include "Matrix.h"
#include "RandomGenerator.h"

Matrix::Matrix(int h, int w) {
    this->values = new double*[h];
    for (int k = 0; k < h; ++k) {
        this->values[k] = new double[w];
    }

    this->rotated = false;
    this->w = w;
    this->h = h;


}

Matrix::Matrix(const Matrix &other)   {
    h = other.h;
    w = other.w;
    values = new double*[h];
    for (int height = 0; height < h; ++height) {
        values[height] = new double[w];
    }

    for (int height = 0; height < h; ++height) {
        for (int width = 0; width < w; ++width) {
            values[height][width] = other.values[height][width];
        }
    }
    rotated = other.rotated;

}

Matrix::~Matrix() {
    for(int i=0; i < this->h; ++i)
        delete[] this->values[i];
    delete[] this->values;
}

Matrix::Matrix() {
}

int Matrix::getWidth()const {
    return w;
}

int Matrix::getHeight()const {
    return h;
}

/*other matrix needs to be smaller than this matrix to make
 * the convolution operation*/
Matrix Matrix::operator*(const Matrix &other) const {
    int width = w - other.w + 1;
    int height = h - other.h + 1;
    if (width < 0 || height < 0)
        return Matrix();
    Matrix temp(width,height);
    if (!rotated && !other.rotated) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                //aaaaaaa
                for (int k = 0; k < other.h; ++k) {
                    for (int l = 0; l < other.w; ++l) {
                        temp.values[i][j] += values[i+k][j+l]*other.values[k][l];
                    }

                }
            }
        }
    }

    if (rotated && !other.rotated) {
        for (int i = height -1; i >= 0; i--) {
            for (int j = width -1; j >= 0; j--) {
                //aaaaaaa
                for (int k = other.h -1; k >= 0; k--) {
                    for (int l = other.w-1; l >= 0; l--) {
                        temp.values[height - i -1][width - j -1] += values[i+k][j+l]*other.values[other.h -k -1][other.w - l -1];
                    }

                }
            }
        }
    }

    double a,b,x;
    if (!rotated && other.rotated) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                //aaaaaaa
                for (int k = other.h -1; k >=0; k--) {
                    for (int l = other.w -1; l >=0; l--) {
                        a = values[i + other.h -1 -k][j + other.w -1 -l];
                        b =other.values[k][l];
                        x =a*b;
                        if(i == 0 & j == 1)
                            std::cout<< x <<std::endl;
                        temp.values[i][j] += values[i + other.h -1 -k][j + other.w -1 -l] *other.values[k][l];
                    }

                }
            }
        }
        std::cout << temp.values[0][1] << std::endl;
    }

    if (rotated && other.rotated) {
        for (int i = height -1; i >= 0; i--) {
            for (int j = width -1; j >= 0; j--) {
                //aaaaaaa
                for (int k = other.h -1; k >= 0; k--) {
                    for (int l = other.w-1; l >= 0; l--) {
                        temp.values[height - i -1][width - j -1] += values[i+k][j+l]*other.values[k][l];
                    }

                }
            }
        }
    }
    return temp;
}

void Matrix::rot() {
    rotated = !rotated;
    //std::cout << rotated<<std::endl;
}

void Matrix::setValues(int height, int width, double value) {
    values[height][width] = value;
}

double Matrix::getValues(int height, int width) {
    return values[height][width];
}

Matrix &Matrix::operator=(const Matrix& other) {
    this->h = other.h;
    this->w = other.w;
    values = new double*[h];
    for (int height = 0; height < h; ++height) {
        values[height] = new double[w];
    }

    for (int height = 0; height < h; ++height) {
        for (int width = 0; width < w; ++width) {
            values[height][width] = other.values[height][width];
        }
    }
    rotated = other.rotated;

    return *this;
}

/*Have to be the same size*/
Matrix Matrix::operator+(const Matrix &other) const {
    if (h != other.h && w != other.w)
        return Matrix();
    Matrix temp(h,w);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            temp.values[i][j] = values[i][j] + other.values[i][j];
        }
    }
    return temp;
}

/*Have to be the same size*/
Matrix Matrix::operator+=(const Matrix &other) const {
    if (h != other.h && w != other.w) {
        return Matrix();
    }
    Matrix temp(h,w);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            temp.values[i][j] += values[i][j] + other.values[i][j];
        }
    }
    return temp;
}

void Matrix::setRandomValues(int min, int max) {
    RandomGenerator generator = RandomGenerator((unsigned int)time(0));
    for (int height = 0; height < h; ++h) {
        for (int width = 0; width < w; ++width) {
            values[h][w] = generator.randomBetween(min,max);
        }
    }

}





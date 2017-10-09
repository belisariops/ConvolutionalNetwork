//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include <cmath>
#include "Matrix.h"
#include "RandomGenerator.h"

Matrix::Matrix(int h, int w) {
    this->values = new double*[h];
    for (int k = 0; k < h; k++) {
        this->values[k] = new double[w];
        for (int j = 0; j < w; j++)
            values[k][j] = 0;
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
        for (int width = 0; width < w; ++width) {
            values[height][width] = other.values[height][width];
        }
    }
//    values = other.values;
    rotated = other.rotated;

}

Matrix::~Matrix() {
    for(int i=0; i < this->h; ++i) {
        delete[] this->values[i];
    }
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

    if (!rotated && other.rotated) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                //aaaaaaa
                for (int k = other.h -1; k >=0; k--) {
                    for (int l = other.w -1; l >=0; l--) {

                        temp.values[i][j] += values[i + other.h -1 -k][j + other.w -1 -l] *other.values[k][l];
                    }

                }
            }
        }
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
}

void Matrix::setValues(int height, int width, double value) {
    values[height][width] = value;
}

double Matrix::getValues(int height, int width) {
    return values[height][width];
}

Matrix &Matrix::operator=(const Matrix& other) {
    if (&other != this) {
        this->h = other.getHeight();
        this->w = other.getWidth();
        values = new double *[h];
        for (int height = 0; height < h; height++) {
            values[height] = new double[w];
        }

        for (int height = 0; height < h; height++) {
            for (int width = 0; width < w; width++) {
                values[height][width] = other.values[height][width];
            }
        }
        rotated = other.rotated;
    }

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

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            values[i][j] += other.values[i][j];
        }
    }
    return *this;

}

void Matrix::setRandomValues(int min, int max) {
    RandomGenerator generator = RandomGenerator((unsigned int)time(0));
    for (int height = 0; height < h; ++height) {
        for (int width = 0; width < w; ++width) {
            double x = generator.randomBetween(min,max);
            this->values[height][width] = x;
        }
    }

}

double sigmoid(double x) {
    return 1/(1 - exp(x));
}

void Matrix::applyTransfereDerivative() {
    for (int height = 0; height < h; ++height) {
        for(int width = 0; width < w; ++width) {
            values[height][width] = sigmoid(values[height][width])*sigmoid(1 - values[height][width]);
        }
    }
}

double Matrix::sumValues() {
    double sum = 0;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            sum +=values[i][j];
        }
    }
    return sum;
}

double **Matrix::getMatrixValues() {
    return values;
}

Matrix Matrix::operator-(const Matrix &other) const {
    if (h != other.h && w != other.w)
        return Matrix();
    Matrix temp(h,w);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            temp.values[i][j] = values[i][j] - other.values[i][j];
        }
    }
    return temp;
}

Matrix Matrix::operator^(const Matrix &other) const {
    if (h != other.h && w != other.w)
        return Matrix();
    Matrix temp(h,w);
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            double x = values[i][j];
            double u = other.values[i][j];
            temp.values[i][j] = values[i][j] * other.values[i][j];
        }
    }
    return temp;
}





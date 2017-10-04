//
// Created by belisariops on 9/27/17.
//

#include <iostream>
#include "Matrix.h"

Matrix::Matrix(unsigned long h, unsigned long w) {
    std::vector<double> a(0,h);
    this->values = new double*[h];
    for (int k = 0; k < h; ++k) {
        this->values[k] = new double[w];
    }

    //TODO luego borrar
    for (int i =0; i < w; i++) {
        std:: vector<double> vec;
        for (int j = 0; j < h; j++)
            vec.push_back(0);
        this->map.push_back(vec);

    }
    //Hasta aca

    this->rotated = false;
    this->w = w;
    this->h = h;


}

Matrix::~Matrix() {
    //TODO borrar
    for (std::vector<double> x : this->map)
        x.clear();
    this->map.clear();
    //Hasta aca

    for(int i=0; i < this->h; ++i)
        delete[] this->values[i];
    delete[] this->values;
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



std::vector<std::vector<double>> Matrix::getMap() {
    return map;
}

double Matrix::getValue(int widthPosition, int heightPosition) {
    return map[widthPosition][heightPosition];
}


/*other matrix needs to be smaller than this matrix*/
Matrix Matrix::operator*(const Matrix &other) {
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
                        std::cout << temp.values[i][j]<< " " << i << " "<< j  << std::endl;
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
                        temp.values[i][j] += values[i + other.h -1 -k][j + other.w -1 -k] *other.values[k][l];
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
    this->rotated = true;
}

void Matrix::setValues(int height, int width, double value) {
    values[height][width] = value;
}

double Matrix::getValues(int height, int width) {
    return values[height][width];
}



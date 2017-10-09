#include <iostream>
#include <vector>
#include "Matrix.h"
#include "ConvolutionalLayer.h"
#include "PoolingLayer.h"
#include "ReluLayer.h"
#include "OutputLayer.h"

//std::vector<std::vector<int>> tifImagetoMatrix(std::string imageName) {
//
//    // Open the TIFF file using libtiff
//    TIFF* tif = TIFFOpen(imageName.c_str(), "r");
//
//    // Create a matrix to hold the tif image in
//    std::vector<std::vector<int>> image;
//    std::vector<std::vector<int>> error;
//
//    // check the tif is open
//    if (tif) {
//
//        unsigned int width, height;
//        uint32* raster;
//
//        // get the size of the tiff
//        TIFFGetField(tif, TIFFTAG_IMAGEWIDTH, &width);
//        TIFFGetField(tif, TIFFTAG_IMAGELENGTH, &height);
//
//        uint npixels = width*height; // get the total number of pixels
//
//        raster = (uint32*)_TIFFmalloc(npixels * sizeof(uint32)); // allocate temp memory (must use the tiff library malloc)
//        if (raster == NULL) // check the raster's memory was allocaed
//        {
//            TIFFClose(tif);
//            std::cerr<< "Could not allocate memory for raster of TIFF image" << std::endl;
//            return error;
//        }
//
//        // Check the tif read to the raster correctly
//        if (!TIFFReadRGBAImage(tif, width, height, raster, 0))
//        {
//            TIFFClose(tif);
//            std :: cerr << "Could not read raster of TIFF image" << std :: endl;
//            return error;
//        }
//
//        //image = Mat(width, height, CV_8UC4); // create a new matrix of w x h with 8 bits per channel and 4 channels (RGBA)
//
//        // itterate through all the pixels of the tif
//        for (uint x = 0; x < width; x++) {
//            std::vector<int> vectorLine;
//            for (uint y = 0; y < height; y++) {
//                uint32 &TiffPixel = raster[y * width + x]; // read the current pixel of the TIF
//                if (TIFFGetR(TiffPixel)  <200 && TIFFGetB(TiffPixel) < 200 && TIFFGetB(TiffPixel) < 200)
//                    vectorLine.push_back(1);
//                else
//                    vectorLine.push_back(0);
//
//                /*Vec4b& pixel = image.at<Vec4b>(Point(y, x)); // read the current pixel of the matrix
//                pixel[0] = TIFFGetB(TiffPixel); // Set the pixel values as BGRA
//                pixel[1] = TIFFGetG(TiffPixel);
//                pixel[2] = TIFFGetR(TiffPixel);
//                pixel[3] = TIFFGetA(TiffPixel);*/
//            }
//            image.push_back(vectorLine);
//        }
//        std::cout << width << " " << height << std::endl;
//
//        _TIFFfree(raster); // release temp memory
//        // Rotate the image 90 degrees couter clockwise
//        /*image = image.t();
//        flip(image, imae, 0);
//        imshow("TIF Image", image); // show the image
//        waitKey(0); // wait for anykey before displaying next*/
//        //while (TIFFReadDirectory(tif)); // get the next tif
//        TIFFClose(tif); // close the tif file
//    }
//
//    return image;
//
//
//}

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;

//    Filter* f = new Filter(3,3);
//
//    f->setValue(0,1,2);
//    f->setValue(1,1,4);
//    f->setValue(1,0,3);
//    f->setValue(0,0,1);
//
//    f->setDeltaValue(0,0,-1);
//    f->setDeltaValue(0,1,1);
//    f->setDeltaValue(1,0,1);
//    f->setDeltaValue(1,1,-1);

//    FeatureMap * k = new FeatureMap(3,3);
//    k->setOutput(0,0,0);
//    k->setOutput(0,1,1);
//    k->setOutput(0,2,2);
//    k->setOutput(1,0,3);
//    k->setOutput(1,1,4);
//    k->setOutput(1,1,5);
//    k->setOutput(2,0,6);
//    k->setOutput(2,1,7);
//    k->setOutput(2,2,8);
//
//    free(k);
//
//    Filter *other = k->calculateDeltasForPreviousLayer(f);
//
//    FeatureMap* h = k->conv(f);
//    std::cout << h->getValues()[0][0] << std::endl;

//    std::vector<std::vector<int>> image = tifImagetoMatrix("00001.tif");
//
//    for (std::vector<int> vectorLine : image) {
//        for (int pixel : vectorLine)
//            std::cout << pixel << "";
//        std::cout<< std::endl;
//    }
//    std::cout << image.size() << " " << image[0].size() << std::endl;

//    Matrix *m = new Matrix(2,2);
//    m->setValues(0,0,1);
//    m->setValues(0,1,2);
//    m->setValues(1,0,3);
//    m->setValues(1,1,4);
//    Matrix *x = new Matrix(4,4);
//    x->setValues(0,0,1);
//    x->setValues(0,1,2);
//    x->setValues(0,2,3);
//    x->setValues(0,3,4);
//    x->setValues(1,0,5);
//    x->setValues(1,1,6);
//    x->setValues(1,2,7);
//    x->setValues(1,3,8);
//    x->setValues(2,0,9);
//    x->setValues(2,1,10);
//    x->setValues(2,2,11);
//    x->setValues(2,3,12);
//    x->setValues(3,0,13);
//    x->setValues(3,1,14);
//    x->setValues(3,2,15);
//    x->setValues(3,3,16);
//    Matrix *b = new Matrix;
//
//
//    ConvolutionalLayer *a = new ConvolutionalLayer(1,1,1,4,4);
//    a->buildRandomLayer(0,1);
//    ConvolutionalLayer *asdf = new ConvolutionalLayer(1,1,1,4,4);
//    asdf->buildRandomLayer(0,1);
//    PoolingLayer *o = new PoolingLayer(2,2,1,4,4);
//    ReluLayer *r = new ReluLayer(1);
//    OutputLayer *out = new OutputLayer(2,2,1,2,0.05);
//    out->buildRandomLayer(-2,2);
//    r->connect(out);
//    o->connect(r);
//    asdf->connect(o);
//    a->connect(asdf);
//    Matrix *input[1] = {x};
//    a->forwardPropagation(input,1);


    return 0;


}
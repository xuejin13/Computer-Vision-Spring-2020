//Xuejin Gao
//Homework 2, problem 1

#include "program.h"
#include "image.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int b(size_t x, size_t y, int threshold, const Image *anImg){
    if(anImg->GetPixel(x,y) > threshold)
        return 255;
    return 0;
}

void program1(Image *anImage, int threshold){


    for(size_t row = 0; row < anImage->num_rows() - 20; row++){
        for(size_t col = 0; col < anImage->num_columns() - 20; col++){
            int binaryColor = b(row, col, threshold, anImage);
            anImage->SetPixel(row, col, binaryColor);
        }
    }
}
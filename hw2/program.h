
#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include <cstdlib>
#include "image.h"

using namespace std;
using namespace ComputerVisionProjects;

// returns the binary value of the pixel at x,y
// returns 1 if the pixel[x,y] < threshold, 0 if pixel[x,y] >= threshold
int b(size_t x, size_t y, int threshold, const Image * anImg);

// anImage is a grayscaled image that is converted into a Binary Image based on the threshold
// a basic usage:
// program1(Image, 100) 
// anImage will be the new Binary Image
void program1(Image *anImage, int threshold);


#endif
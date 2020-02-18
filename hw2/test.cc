//Xuejin Gao
//Computer Vision
//2/15/2020

#include "image.h"
#include <cstdio>
#include <iostream>
#include <string>
#include "program.h"

using namespace std;
using namespace ComputerVisionProjects;

int main(int argc, char **argv){

    if (argc != 3){
        printf("Usage: %s file1 file2\n", argv[0]);
        return 0;
    }

    const string input_file(argv[1]);
    const string output_file(argv[2]);

    Image an_image;
    if(!ReadImage(input_file, &an_image)){
        cout << "Can't open file " << input_file << endl;
        return 0;
    }

    program1(&an_image, 128);
    // for(size_t i = 0; i < an_image.num_rows(); i++){
    //     for(size_t j = 0; j < an_image.num_columns(); j++){
    //         auto var = an_image.GetPixel(i, j);
    //         auto binary = b(row, col, 128, &an_image)
    //         if(var > 128)
    //             cout << var << " ";
    //     }
    //         // cout << an_image.GetPixel(i, j) << " ";
    //     cout << endl;
    // }
    // DrawLine(0, 0, 100, 240, 200,
	//    &an_image); 

    if(!WriteImage(output_file, an_image)){
        cout << "Can't write to file " << output_file << endl;
        return 0;
    }

    return 0;
}

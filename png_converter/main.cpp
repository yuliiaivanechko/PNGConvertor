//
//  main.cpp
//  png_converter
//
//  Created by Yuliia Ivanechko on 26.08.2023.
//

#include "image_convertor.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    
    /*if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <input_image> <output_image> <format>" << std::endl;
        return 1;
    }*/
    
    const char *filename = "/Users/yuliania/Downloads/dog.png";
    FILE *fp = fopen(filename, "rb");
    if (fp == nullptr)
    {
        perror("Error oppening file");
    }
    png_structp png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    if(!png) abort();

    png_infop info = png_create_info_struct(png);
    if(!info) abort();

    if(setjmp(png_jmpbuf(png))) abort();

    png_init_io(png, fp);

    png_read_info(png, info);

    int width      = png_get_image_width(png, info);
    int height     = png_get_image_height(png, info);
    png_byte color_type = png_get_color_type(png, info);
    png_byte bit_depth  = png_get_bit_depth(png, info);
    return 0;
}

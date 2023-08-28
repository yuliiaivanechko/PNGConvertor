//
//  image.hpp
//  png_converter
//
//  Created by Yuliia Ivanechko on 26.08.2023.
//

#pragma once

#include <iostream>
#include "png.h"
#include "jpeglib.h"

class Image {
public:
    Image(int width, int height);
    ~Image();

    void setPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b);
    void saveAsPNG(const std::string& filename);
    void saveAsJPEG(const std::string& filename, int quality);

private:
    int width;
    int height;
    unsigned char* pixelData; // Raw pixel data
};

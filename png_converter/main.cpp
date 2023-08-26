//
//  main.cpp
//  png_converter
//
//  Created by Yuliia Ivanechko on 26.08.2023.
//

#include "image_convertor.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <input_image> <output_image> <format>" << std::endl;
        return 1;
    }
    return 0;
}

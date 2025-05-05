// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program uses a nested loop to create a 2D RGB array and print it

#include <iostream>

int main() {
    // Loop through RGB combinations in steps of 15
    for (int r = 0; r <= 255; r += 15) {
        for (int g = 0; g <= 255; g += 15) {
            for (int b = 0; b <= 255; b += 15) {
                // Output text in the specified RGB color
                std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m"
                          << "RGB(" << r << "," << g << "," << b << ")"
                          << "\033[0m" << std::endl;
            }
        }
    }

    return 0;
}

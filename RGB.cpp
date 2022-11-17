// Copyright (c) 2022 Cameron Diedrich All rights reserved

// Created by: Cameron Diedrich
// Created on: November 2022
// This program finds every RGB

#include <iostream>

int main() {
    // This function finds every valid RGB

    int counter1;
    int counter2;
    int counter3;

    // Process and Output
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                std::cout << "RGB(" << counter1 << "," << counter2 << ","
                          << counter3 << ")" << std::endl;
            }
        }
    }

    std::cout << "\nDone" << std::endl;
}

// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program lets the user enter an integer and tells them if it's positive,
// negative, or a zero

#include <iostream>

int main() {
    // variables
    float integer;


    // input
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    // process
    if (integer == 0) {
        std::cout << "0";
    } else if (integer < 0) {
        std::cout << "negative";
    } else {
        std::cout << "positive";
    }
}

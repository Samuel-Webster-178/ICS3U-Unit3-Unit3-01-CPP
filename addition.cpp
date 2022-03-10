// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates sum of two inputted integers

#include <iostream>

int main() {
    // I calculate circumference of a circle
    int firstNumber;
    int secondNumber;
    int sum;

    // input
    std::cout << "Enter the first integer to add: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second integer to add: ";
    std::cin >> secondNumber;

    // process
    sum = firstNumber + secondNumber;

    // output
    std::cout << "" << std::endl;
    std::cout << firstNumber << " + " << secondNumber << " = ";
    std::cout << sum << std::endl;
    std::cout << "\nDone." << std::endl;
}

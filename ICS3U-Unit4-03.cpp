// Copyright (c) 2022 Emmanuel Fofeyin
//
// Created by: Emmanuel Fofeyin
// Created on: Oct 2022
// This program uses while loops

#include <iostream>
#include <string>

int positiveInteger;
int multiplyInt = 1;
int loopCounter = 0;
int squaredNumber;
float positiveFloat;
std::string positiveString;

int main() {
    // This program squares all positive integers

    // Input
    std::cout << "Enter an integer >= 0: ";
    std::cin >> positiveString;
    std::cout << std::endl;

    // Process and output
    try {
        positiveFloat = std::stof(positiveString);
        positiveInteger = positiveFloat;
        if (positiveInteger == positiveFloat) {
            if (positiveInteger >= 0) {
                for (int loopCounter = 0; loopCounter
                 <= positiveInteger; loopCounter++) {
                    squaredNumber = loopCounter * loopCounter;
                    std::cout << "" << loopCounter << "²"
                              << " = " << squaredNumber << std::endl;
                }
            } else {
            std::cout << "You did not enter a positive integer." << std::endl;
            }
        } else {
            std::cout << "You did not enter an integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You did not enter an integer." << std::endl;
    }

    std::cout << "\nDone.";
}

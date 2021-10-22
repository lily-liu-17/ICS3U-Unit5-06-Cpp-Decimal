// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program rounds numbers

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

void RoundNumber(float &number, int decimal) {
    number = number * pow(10, decimal) + 0.5;
    number = static_cast<int>(number);
    number = number / pow(10, decimal);
}

int main() {
    // this is the main function

    float userNumber;
    int userDecimal;
    std::string userNumberString;
    std::string userDecimalString;

    // input
    try {
        std::cout << "Enter the number you want to round : ";
        std::cin >> userNumberString;
        userNumber = std::stof(userNumberString);
        std::cout << "Enter how many numbers you want to round : ";
        std::cin >> userDecimalString;
        userDecimal = std::stoi(userDecimalString);

        // call function
        RoundNumber(userNumber, userDecimal);

        std::cout << "The rounded number is " << userNumber << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

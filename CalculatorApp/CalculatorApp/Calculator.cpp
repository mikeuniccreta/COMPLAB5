/**
* \file Calculator.cpp
* \brief Implementation file for the Calculator class
* \details This file contains the definitions of the member functions of the Calculator class.
* \author Mike Kapetanakis
* \version 0.1
* \date 19/4/2024
*/
#include "Calculator.h"
#include <stdexcept> // For std::invalid_argument

// Definition of the Add function
int Calculator::Add(int a, int b) {
    return a + b;
}

// Definition of the Subtract function
int Calculator::Subtract(int a, int b) {
    return a - b;
}

// Definition of the Multiply function
int Calculator::Multiply(int a, int b) {
    return a * b;
}

// Definition of the Divide function
double Calculator::Divide(int a, int b) {
    // Check if the divisor is zero
    if (b == 0) {
        // Throw an exception if the divisor is zero
        throw std::invalid_argument("Divider cannot be zero");
    }
    // Perform the division and return the result
    return static_cast<double>(a) / b;
}

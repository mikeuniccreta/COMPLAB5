/**
* \file main.cpp
* \brief Main file for the Calculator application
* \details This file contains the main function and serves as the entry point of the program.
* \author Mike Kapetanakis
* \version 0.1
* \date 19/4/2024
*/
#include "Calculator.h" // Include the header file for the Calculator class
#include <iostream> // For input and output operations
#include <stdexcept> // For std::invalid_argument

int main() {
    // Create an instance of the Calculator class
    Calculator calculator;

    // Test the calculator functions
    std::cout << "Addition: " << calculator.Add(5, 3) << std::endl;
    std::cout << "Subtraction: " << calculator.Subtract(5, 3) << std::endl;
    std::cout << "Multiplication: " << calculator.Multiply(5, 3) << std::endl;

    try {
        // Test division with divisor as zero (exception should be thrown)
        std::cout << "Division: " << calculator.Divide(5, 0) << std::endl;
    }
    catch (const std::invalid_argument& e) {
        // Catch and print the exception message
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0; // Return 0 to indicate successful execution
}

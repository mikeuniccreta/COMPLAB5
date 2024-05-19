/**\ file Calculator.cpp
* brief header file for Calculator app file 
* \details .. Insert the functions 
* \author Mike Kapetanakis
* \version 0.1
* \date  19/4/2024
*/

#pragma once

// Declaration of the Calculator class
class Calculator {
public:
    // Function to add two integers
    int Add(int a, int b);

    // Function to subtract one integer from another
    int Subtract(int a, int b);

    // Function to multiply two integers
    int Multiply(int a, int b);

    // Function to divide one integer by another
    // Throws an exception if the divisor is zero
    double Divide(int a, int b);
};

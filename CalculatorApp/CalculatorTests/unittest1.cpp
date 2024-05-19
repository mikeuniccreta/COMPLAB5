#include "CppUnitTest.h"
#include "Calculator.h" // Include the header file for the Calculator class
#include "../CalculatorApp/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
    TEST_CLASS(CalculatorTests)
    {
    public:
        Calculator calculator; // Create an instance of Calculator for testing

        // Test case for addition
        TEST_METHOD(TestAddition)
        {
            // Verify that 2 + 3 equals 5
            Assert::AreEqual(5, calculator.Add(2, 3));
        }

        // Test case for subtraction
        TEST_METHOD(TestSubtraction)
        {
            // Verify that 3 - 2 equals 1
            Assert::AreEqual(1, calculator.Subtract(3, 2));
        }

        // Test case for multiplication
        TEST_METHOD(TestMultiplication)
        {
            // Verify that 2 * 3 equals 6
            Assert::AreEqual(6, calculator.Multiply(2, 3));
        }

        // Test case for division
        TEST_METHOD(TestDivision)
        {
            // Verify that 6 / 3 equals 2
            Assert::AreEqual(2.0, calculator.Divide(6, 3));
        }

        // Test case for division by zero
        TEST_METHOD(TestDivisionByZero)
        {
            // Verify that dividing by zero throws an invalid_argument exception
            auto func = [&] { calculator.Divide(1, 0); };
            Assert::ExpectException<std::invalid_argument>(func);
        }
    };
}

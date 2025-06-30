#include <iostream>
#include <string>
using namespace std;

// Define a Calculator class
class Calculator {
public:
    // Function to perform basic arithmetic operations
    double simple_class_calculator(double a, double b, const string& operation) {
        // Check which operation is requested and perform it
        if (operation == "+") {
            return a + b;
        }
        else if (operation == "-") {
            return a - b;
        }
        else if (operation == "*") {
            return a * b;
        }
        else if (operation == "/") {
            // Handle division by zero
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return -1;
            }
            return a / b;
        }
        else {
            // Handle invalid operations
            cout << "Invalid operation!" << endl;
            return -2;
        }
    }
};

int main() {
    Calculator calc;  // Create an object of the Calculator class
    double a, b;      // Variables to store the two numbers
    string op;        // Variable to store the operation (+, -, *, /)

    // Prompt the user to enter the first number
    cout << "Enter first number: ";
    cin >> a;

    // Prompt the user to enter the operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // Prompt the user to enter the second number
    cout << "Enter second number: ";
    cin >> b;

    // Call the calculator function and store the result
    double result = calc.simple_class_calculator(a, b, op);

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}

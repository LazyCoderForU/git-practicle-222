#include <iostream>
using namespace std;

void addAndSubtract() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
}

void multiplyAndDivide() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num2 != 0) {
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
}

int main() {
    int choice;
    cout << "Select an operation:\n";
    cout << "1. Add and Subtract\n";
    cout << "2. Multiply and Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        addAndSubtract();
    } else if (choice == 2) {
        multiplyAndDivide();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

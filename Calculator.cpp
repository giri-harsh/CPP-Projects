#include <iostream>
using namespace std;

int main() {
    cout << "Enter first number: ";
    double n1;
    cin >> n1;

    cout << "Enter second number: ";
    double n2;
    cin >> n2;

    cout << "Choose Operator:" << endl;
    cout << "For Addition: +" << endl;
    cout << "For Subtraction: -" << endl;
    cout << "For Multiplication: *" << endl;
    cout << "For Division: /" << endl;

    double result = 0.0;
    char op;
    cin >> op;

    if (op == '+') {
        result = n1 + n2;
        cout << "Result: " << result << endl;
    } 
    else if (op == '-') {
        result = n1 - n2;
        cout << "Result: " << result << endl;
    } 
    else if (op == '*') {
        result = n1 * n2;
        cout << "Result: " << result << endl;
    } 
    else if (op == '/') {
        if (n2 != 0) {
            result = n1 / n2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
        }
    } 
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

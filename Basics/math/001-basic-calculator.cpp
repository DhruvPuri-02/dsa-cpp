// Problem  : Basic Calculator
// Topic    : Basics / Math
// Approach : Perform basic arithmetic operations on two integers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Sum : " << a + b << endl;
    cout << "Difference : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;

    if (b != 0) {
        cout << "Division : " << a / b << endl;
        cout << "Remainder : " << a % b << endl;
    } else {
        cout << "Division : Not possible (division by zero)" << endl;
        cout << "Remainder : Not possible" << endl;
    }

    return 0;
}
// Problem  : Factorial of a Number using Function
// Topic    : Basics / Math / Functions
// Approach : Multiply numbers from 1 to n using a helper function

#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n);
    return 0;
}

// Problem  : Find Factorial of a Number
// Topic    : Basics / Math
// Approach : Iterative multiplication from 2 to n

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Factorial not defined for negative numbers";
        return 0;
    }

    int fact = 1;

    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial : " << fact;

    return 0;
}

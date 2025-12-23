// Problem  : Minimum of Two Numbers
// Topic    : Basics / Math
// Approach : Compare two integers using conditional statements

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << a;
    } else {
        cout << b;
    }

    return 0;
}

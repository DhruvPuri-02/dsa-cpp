// Problem  : Reverse a Number using Function
// Topic    : Basics / Math / Functions
// Approach : Extract reverse logic into a helper function

#include <iostream>
using namespace std;

int reverseNum(int num) {
    int rev = 0;
    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;

    cout << reverseNum(n);
    return 0;
}

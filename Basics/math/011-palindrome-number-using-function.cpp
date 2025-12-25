// Problem  : Check Palindrome Number using Function
// Topic    : Basics / Math / Functions
// Approach : Reverse the number and compare with original

#include <iostream>
using namespace std;

int reverseNumber(int num) {
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

    if (n == reverseNumber(n)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}

// Program  : Check 3-digit Armstrong Number
// Topic    : Basics / Math
// Approach : Sum cubes of digits and compare with original number
#include <iostream>
using namespace std;

void isArmstrong(int num) {
    int original = num;
    int rem, sum = 0;

    while (num > 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    if (sum == original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}

int main() {
    int n;
    cin >> n;
    isArmstrong(n);
    return 0;
}
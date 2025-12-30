// Program  : Binary to Decimal Conversion
// Topic    : Basics / Math
// Approach : Extract each binary digit and multiply by powers of 2

#include <iostream>
using namespace std;

int main() {
    int binary;
    cin >> binary;
    int rem, decimal = 0, power = 1;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * power;
        power *= 2;
        binary = binary / 10;
    }
    cout << decimal;
    return 0;
}

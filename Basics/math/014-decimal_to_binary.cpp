// Program : Decimal to Binary Conversion
// Topic   : Basics / Math
// Approach: Repeatedly divide the number by 2 and store remainders & Place value is used to maintain correct binary order

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rem, binary = 0, place = 1;
    while (n > 0) {
        rem = n % 2;
        binary += rem * place;
        place *= 10;
        n = n / 2;
    }
    cout << binary;
    return 0;
}
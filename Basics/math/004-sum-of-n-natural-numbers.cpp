// Problem  : Sum of First N Natural Numbers
// Topic    : Basics / Math
// Approach : Iterate from 1 to N and accumulate sum

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum;
    return 0;
}

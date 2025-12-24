#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    
    if (n == 0) {
    cout << "Total Digits : 1";
    return 0;
    }

    while (n >= 10) {
        n = n / 10;
        count++;
    }

    cout << "Total Digits : " << count;
    return 0;
}

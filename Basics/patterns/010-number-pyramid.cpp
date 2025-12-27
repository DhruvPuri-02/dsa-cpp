// Pattern 10 : Number Pyramid
// Topic      : Patterns
// Approach   : Use spaces for alignment, then print increasing and decreasing numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int num = 1; num <= i; num++) {
            cout << num;
        }
        for (int num = i - 1; num >= 1; num--) {
            cout << num;
        }
        cout << endl;
    }
    return 0;
}
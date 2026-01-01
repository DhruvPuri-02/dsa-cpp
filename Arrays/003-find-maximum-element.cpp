// Program  : Find Maximum Element in Array
// Topic    : Arrays
// Approach : Traverse array and track largest value

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int largest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}

// Program  : Linear Search in Array
// Topic    : Arrays
// Approach : Traverse array and compare each element with target

#include <iostream>
using namespace std;
int main() {
    int size = 8;
    int arr[size] = {1,2,3,4,5,6,7,8};
    int target;
    cin >> target;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}

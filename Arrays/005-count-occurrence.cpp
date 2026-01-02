// Pattern  : Count Occurrence of an Element
// Topic    : Arrays
// Approach : Traverse the array and increment count when element matches target

#include<iostream>
using namespace std;
int main(){
    int size = 8;
    int arr[size] = {1, 2, 3, 2, 4, 2, 5, 2};
    int target;
    cin >> target;
    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            count++;
        }
    }
    cout << count;
    return 0;
}
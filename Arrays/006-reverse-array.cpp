// Pattern  : Reverse Array
// Topic    : Arrays
// Approach : Swap elements from start and end moving inward

#include<iostream>
using namespace std;
int main(){
    int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = size - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
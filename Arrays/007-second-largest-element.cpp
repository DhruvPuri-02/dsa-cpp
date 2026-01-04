// Pattern  : Second Largest Element
// Topic    : Arrays
// Approach : Track largest and second largest in one pass

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size = 6;
    int arr[size] = {10, 5, 20, 8, 15, 3};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    cout << secondLargest;
    return 0;
}
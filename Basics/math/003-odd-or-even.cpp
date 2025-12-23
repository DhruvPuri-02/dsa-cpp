#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    if(a == 0){
        cout << "Enetred number is Zero";
    }
    else if (a % 2 == 0){
        cout << "Entered number is Even";
    }
    else{
        cout << "Entered number is Odd";
    }
    return 0;
}
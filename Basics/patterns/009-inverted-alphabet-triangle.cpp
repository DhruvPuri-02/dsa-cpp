// Pattern  : Inverted Alphabet Triangle
// Topic    : Patterns
// Approach : Outer loop decreases rows, inner loop prints characters
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>=1;i--){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
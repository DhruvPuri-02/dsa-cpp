// Pattern  : Right Angled Number Triangle
// Topic    : Patterns
// Approach : Inner loop prints numbers from 1 to row number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int k = 1;
        for(int j=1;j<=i;j++){
            cout << k;
            k++;
        }
        cout << endl;
    }
    return 0;
}
//Display sum of series 1+2+3+4+5+..+n = ?
#include<iostream>
using namespace std;

int main (){
    int n=100, sum=0, i;

    cout << "Enter a positive number:";
    cin >> n;

    for(i=1; i<n; ++i){
        sum = sum+i;
    }

    cout << "Sum=" <<sum;
    return 0;
}

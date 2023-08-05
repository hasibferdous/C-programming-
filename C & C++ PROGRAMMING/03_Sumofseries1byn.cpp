//Sum of series 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 +……+ 1/n?
#include <iostream>
using namespace std;
int main() {
 int n=100, i;
 float sum = 0.0;
 cout << "Enter a positive integer: ";
 cin >> n;
 for (int i = 1; i <= n; ++i) {
 sum+=(1.0/i);
 }
 cout << "Sum = " << sum;
 return 0;
}

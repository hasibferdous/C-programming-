//Display sum of series 1 +1/ 2² + 1/3² + 1/4² + 1/5² +….+ 1/n² = ?
#include <iostream>
using namespace std;
int main() {
 int n=100, sum = 0;
 cout << "Enter a positive integer: ";
 cin >> n;
 for (int i = 1; i <= n; ++i) {
 sum+=(1.0/(i*i));
 // sum = sum + (1.0 / (i*i) )
 }
 cout << "Sum = " << sum;
 return 0;
}

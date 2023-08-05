//Display sum of series 1 +1/ 2² + 1/3² + 1/4² + 1/5² +….+ 1/n² = ?
#include<stdio.h>
int main()
{
 int n,i;
 float sum=0.0;
 printf("Enter the limit (n Value): ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 sum+=(1.0/(i*i));
 // sum = sum + (1.0 / (i*i) )
 }
 printf("Sum = %f", sum);
 return 0;
}

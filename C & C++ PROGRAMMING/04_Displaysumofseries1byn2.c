//Display sum of series 1 +1/ 2� + 1/3� + 1/4� + 1/5� +�.+ 1/n� = ?
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

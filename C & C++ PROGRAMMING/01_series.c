//Display sum of series 1+2+3+4+5+..+n = ?
#include<stdio.h>
int main(){
    int n=100, sum=0;
    int i;
    printf("Enter n value:");
    scanf("%d", &n);
    printf("Sum of Series:");
    for( i=1; i<=n; i++){
        printf("+%d",i);
        //sum +=i;
        sum=sum+i;
    }
    printf("=%d", sum);

    return 0;
}

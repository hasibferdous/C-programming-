//Write a C program to Print 1 to 10 without a loop.
//Using static integer
#include<stdio.h>
int main() {
static int i = 1;
if (i <=10) {
printf("%d",i++);
main();
}
return 0;
}

//Using begin & goto
#include<stdio.h>
int main(){
    int i=0;
    begin:
        i=i+1;
        printf("%d",i);
        if(i<10){
            goto begin;
            return 0;
        }
}

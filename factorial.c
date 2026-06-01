#include<stdio.h>

int main ()

{

    int n,i,factorial=1;

    printf("enter the value of n=");
    scanf("%d",&n);

   
    if ( n<0){
        printf(" not possible");
    }

else{
    for(i=1;i<=n;i++){

        factorial = factorial*i;
    }

    printf("Factorial of the req. number =%d",factorial);
    }
    return 0;
}
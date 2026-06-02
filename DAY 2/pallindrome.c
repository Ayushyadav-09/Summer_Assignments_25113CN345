#include<stdio.h>

int main ()
{
    int num,rem,rev=0,original;
    printf("enter the number=");
    scanf("%d",&num);
 

    original=num;


    while(num!=0)
    {
        rem =num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    
       if( original==rev){

        printf("\nThe given number is pallindrome");
       }

       else {
        printf("\nNot pallindrome");
       }

       return 0;
}
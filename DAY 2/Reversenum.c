#include<stdio.h>

void main ()
{
 int n,rem,rev=0;

 printf(" Enter the number to be reversed=");
 scanf("%d",&n);

 while(n!=0)
 {

    rem =n%10;
    rev=10*rev+rem;
    n=n/10;

 }
  printf("Reversed Number = %d",rev);
}
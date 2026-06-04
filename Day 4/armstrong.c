#include<stdio.h>

int main ()
{

    int n,r, sum=0,orginal;
    printf("Enter the number =");
    scanf("%d",&n);
   
    if(n<0)
    {
        printf("invalid operation");

        return 0;

    }

    orginal=n;

    while (n!=0)
    {
        r = n % 10;
        sum = sum + r*r*r;
        n = n / 10 ;
    }
    if(orginal==sum)
    {
        printf("armstrong number ");

    }
    else {
        printf(" not armsrong number");

    }
     
    return 0;


}
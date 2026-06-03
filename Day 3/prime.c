#include<stdio.h>

int main ()
{
    int n,i,flag =0;

    printf("enter number :");
    scanf("%d",&n);


    for(i=2;i<n;i++){

        if(n % i == 0){

            flag=1;
            break;
        }
    }
   if(flag==1){
    printf("%d is not prime",n);
   }
   else {
    printf("%d is prime",n);
   }
   return 0;
  }
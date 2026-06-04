#include<stdio.h>

int main()
{
    int a,b,original,i;

    printf("Enter the starting digit :");
    scanf("%d",&a);

    printf("Enter the ending digit :");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
        int sum = 0;
        original = i;
        int temp = i;

        while(temp != 0)
        {
            int r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;
        }

        if(original == sum)
        {
            printf("%d\n", original);
        }
    }

    return 0;
}
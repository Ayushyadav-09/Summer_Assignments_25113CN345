#include<stdio.h>

int main()
{
    int n,i,j,count,maxCount=0,maxElement;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        count=1;

        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count>maxCount)
        {
            maxCount=count;
            maxElement=arr[i];
        }
    }

    printf("Maximum frequency element = %d",maxElement);

    return 0;
}
#include<stdio.h>

int palindrome(int n)
{
    int rem, rev = 0, temp;

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("Palindrome number");
    else
        printf("Not palindrome number");

    return 0;
}
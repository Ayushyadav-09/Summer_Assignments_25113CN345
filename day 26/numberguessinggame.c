#include<stdio.h>

int main()
{
    int secret = 45, guess;

    printf("Guess the number (1-100): ");

    do
    {
        scanf("%d",&guess);

        if(guess > secret)
            printf("Too High! Try Again: ");
        else if(guess < secret)
            printf("Too Low! Try Again: ");

    }while(guess != secret);

    printf("Congratulations! You guessed the correct number.");

    return 0;
}
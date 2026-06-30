#include<stdio.h>

int main()
{
    int totalSeats=50, booked, available;

    printf("Total Seats Available = %d\n",totalSeats);

    printf("Enter Number of Tickets to Book: ");
    scanf("%d",&booked);

    if(booked<=totalSeats)
    {
        available = totalSeats-booked;

        printf("Booking Successful\n");
        printf("Tickets Booked = %d\n",booked);
        printf("Seats Remaining = %d\n",available);
    }
    else
    {
        printf("Not Enough Seats Available\n");
    }

    return 0;
}
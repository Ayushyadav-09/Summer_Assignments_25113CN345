#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n=0,i,choice;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d",&s[n].roll);

                printf("Enter Name: ");
                scanf("%s",s[n].name);

                printf("Enter Marks: ");
                scanf("%f",&s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if(n==0)
                {
                    printf("No Student Records Found!\n");
                }
                else
                {
                    printf("\n----- Student Records -----\n");

                    for(i=0;i<n;i++)
                    {
                        printf("\nRoll No : %d",s[i].roll);
                        printf("\nName    : %s",s[i].name);
                        printf("\nMarks   : %.2f\n",s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=3);

    return 0;
}
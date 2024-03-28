/*1. Display all prime numbers between two Intervals*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int start,end;

    printf("Enter Starting Number : ");
    scanf("%d",&start);

    printf("Enter Ending Number : ");
    scanf("%d",&end);

    display(start,end);
    getch();
}
void display(int start,int end)
{
    int i,j,k=0;

    for(i=start; i<=end; i++)
    {
        for(j=1; j<=end; j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("%d ",i);
        }
        k=0;
    }
    printf("is Prime Number.\n");
}

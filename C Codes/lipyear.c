#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:   ");
    scanf("%d",&year);
    if(year%4)
    {
        printf("This year is not Leap year");
    }
    else if(year%100)
    {
        printf("This year is Leap year");


    }
    else if(year%400)
    {
       printf("This year is not Leap year");

    }
    else
    {
        printf("This year is Leap year");
    }
    return 0;
}

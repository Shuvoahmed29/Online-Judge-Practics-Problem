#include<stdio.h>
int main()
{
    float first_number,second_number;
    printf("Enter the value of two number:  ");
    scanf("%f%f",&first_number,&second_number);
    if(first_number>second_number)
    {
        printf("First_number is maximum");
    }
    else
    {
        printf("Second_number is maximum");
    }
    return 0;
}

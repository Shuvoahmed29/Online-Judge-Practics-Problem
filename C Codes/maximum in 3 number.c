#include<stdio.h>
int main()
{
    double first_number,second_number,third_number;
    printf("Enter the value of three number:     ");
    scanf("%lf%lf%lf",&first_number,&second_number,&third_number);
    if(first_number>second_number&&first_number>third_number)
    {
        printf("First number is maximum number");
    }
    else if(second_number>first_number&&second_number>third_number)
    {
        printf("Second number is maximum number");
    }
    else if(third_number>second_number&&third_number>first_number)
    {
        printf("Third number is maximum number");
    }
    return 0;
}

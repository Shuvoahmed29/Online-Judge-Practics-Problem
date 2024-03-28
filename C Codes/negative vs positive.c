#include<stdio.h>
int main()
{
    double number;
    printf("Enter a number:  ");
    scanf("%lf",&number);
    if(number>0)
    {
        printf("The number is Positive");
    }
    else if(number<0)
    {
        printf("The number is Negative");
    }
    else
    {
        printf("The number is Zero");
    }
    return 0;

}

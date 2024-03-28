#include<stdio.h>
int main()
{
    double mark;
    printf("Enter your mark:  ");
    scanf("%lf",&mark);
    if(mark>=80)
    {
        printf("Your result is A+(5.00)");
    }
    else if(mark>=70&&mark<80)
    {
        printf("Your result is A(4.00)");
    }
    else if(mark>=60&&mark<69)
    {
        printf("Your result is A-(3.50)");
    }
    else if(mark>=50&&mark>59)
    {
        printf("Your result is B(3.00)");
    }
    else if(mark>=40&&mark>49)
    {
        printf("Your result is C(2.00)");
    }
    else if(mark>=33&&mark>39)
    {
        printf("Your result is D(1.00)");
    }
    else if(mark>=00&&mark>32)
    {
        printf("Your result is F(0.00)");
    }
    return 0;
}

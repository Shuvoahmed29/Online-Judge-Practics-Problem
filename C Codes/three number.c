#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter three number:    ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is vary big number");
    }
    else if(b>a&&b>c)
    {
        printf("b is vary big number");
    }
    else
    {
        printf("c is vary big number");
    }
    return 0;
}

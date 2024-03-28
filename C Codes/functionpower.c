#include<stdio.h>
void sum(double base,double exp)
{
    double result=1.00,i;
    for(i=1.00;i<=exp;i++)
    {
        result=result*base;

    }
    printf("Answer = %0.2lf",result);
}
int main()
{
    double base,exp;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exponentiol : ");
    scanf("%lf",&exp);
    sum(base,exp);
}

#include<stdio.h>
 double triangelarea(double h,double b);
int main()
{
    double hight,base;
    printf("Enter hight : ");
    scanf("%lf",&hight);
    printf("Enter base :  ");
    scanf("%lf",&base);
    double result=triangelarea(hight,base);
    printf("The area of triangel is : %0.3lf\n",result);
}
 double triangelarea(double h,double b)
{

    return 0.5*h*b;
}

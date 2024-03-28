#include <stdio.h>
int main()
{
    double b,h,area;
    printf("input the value of Base:");
    scanf("%lf",&b);
    printf("input the value of height:");
    scanf("%lf",&h);
    area=(0.5*b*h);
    printf("%0.2lf\n",area);
    return 0;
}

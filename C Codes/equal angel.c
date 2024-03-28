#include<stdio.h>
int main()
{
    int ang_1,ang_2,ang_3;
    printf("Enter Three Number:  ");
    scanf("%d%d%d",&ang_1,&ang_2,&ang_3);
    if((ang_1=ang_2) && (ang_1=ang_3))
    {
        printf("The triangel is Equilateral .");
    }
    else if((ang_1=ang_2)||(ang_1=ang_3)||(ang_2=ang_3))
    {
        printf("The triangel is Isosceles");
    }
    else
    {
        printf("The triangel is scalene");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    double n,i,result=1;
    printf("Enter any number : ");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        result=result*i;

    }
    printf("The result is : %lf\n",result);
}


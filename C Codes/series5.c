#include<stdio.h>
int main()
{
    double n;
    double i=1;
    double sum=0.00;
    printf("Enter the last values : ");
    scanf("%lf",&n);
    while(n>=i)
    {
        sum = sum + 1/i;
        i++;
        if(i==1)
            printf("\n1+");
        else if(i==n)
            printf("(1/%0.2lf)+",i);
        else
            printf("(1/%0.2lf)+",i);
    }
    printf("= %0.3lf\n",sum);
}

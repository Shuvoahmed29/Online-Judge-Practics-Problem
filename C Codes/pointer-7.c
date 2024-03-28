#include<stdio.h>
int main()
{
    int A=90,B=10;
    int *p1,*p2,sum;
    p1=&A;
    p2=&B;
    sum=*p1+*p2;
    printf("The sum is : %d",sum);
}

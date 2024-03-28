#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,n3;
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    n3=(num1*num2)/n1;
    printf("LCM = %d\n",n1);
    printf("GCD = %d\n",n3);
}

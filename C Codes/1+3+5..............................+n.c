#include<stdio.h>
int main()
{
    int n,i,sum=0,a=1;
    printf("Enter the last number of this series: ");
    scanf("%d",&n);
   while(a<=n)
    {
        sum=sum+a;
        a=a+2;
    }
    printf("1+3+5+7+..........+%d=%d",n,sum);
}


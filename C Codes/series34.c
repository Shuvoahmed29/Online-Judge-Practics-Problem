#include<stdio.h>
int main()
{
    int n,i=1,j=2,sum1=0,sum,sum2=0;
    printf("N=");
    scanf("%d",&n);
    while(i<=n)
    {
        sum1=sum1+i;
        i=i+2;
    }
    while(j<=n)
    {
        sum2=sum2+j;
        j=j+2;
    }
    sum=sum1-sum2;
    printf("Ans = %d\n",sum);
}


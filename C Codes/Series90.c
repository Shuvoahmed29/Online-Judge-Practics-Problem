//sum = 1-2+3-4+5-6...............
#include<stdio.h>
int main()
{
    int n,sum1=0,i=1,sum2=0,sum,j=2;
    printf("N   =   ");
    scanf("%d",&n);

    while(i<=n)
    {


           sum1=sum1+i;
           i+2;


    }

    while(j<=n)
    {


           sum2=sum2+j;
           j+2;


    }
    sum=sum1-sum2;
    printf("Ans = %d\n",sum);
}

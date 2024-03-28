#include<stdio.h>
int main()
{
    long long int n;
    int sum1=0,sum2=0,sum,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+i;
        }
        else
        {
            sum2=sum2+i;
        }
    }
    if(sum1>sum2) sum=-(sum1-sum2);
    else if(sum2>sum1) sum=sum2-sum1;
    else sum=0;
    printf("%d\n",sum);
}

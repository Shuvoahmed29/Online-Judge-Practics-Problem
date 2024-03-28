#include<stdio.h>
int main()
{
    long long int t,r1,r2,sum,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&r1,&r2);
        sum=r1+r2;
        printf("%lld\n",sum);
    }
    return 0;
}

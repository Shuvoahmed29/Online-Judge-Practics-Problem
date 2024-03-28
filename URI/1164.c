#include<stdio.h>
int main()
{
    int n,sum=0,j,i;
    long long int x;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&x);
        for(j=1; j<x; j++)
        {
            if(x%j==0)
            {
                sum=sum+j;
            }

        }
        if(x==sum)
        {
            printf("%d eh perfeito\n",x);
            sum=0;
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
            sum=0;
        }
    }
    return 0;
}

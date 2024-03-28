#include<stdio.h>
int main()
{
    long long int T,sum=0,i,n,j,p=0;
    scanf("%lld",&T);
    long long int A[10000],sum1,sum2,k=0,t,f;
    for(i=0; i<T; i++)
    {
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&A[j]);
            sum = sum + A[j];
        }

        while(p<T)
        {
            for(t=n; t>1; t--)
            {
                sum1=sum-A[t];
                break;
            }
            for(f=1; f<n; f++)
            {
                sum2=sum+A[f];
                break;
            }
            if(sum1==sum2)
            {
                k=1;
            }
            p++;
        }
        if(k==1)
        {
            printf("YES\n",k);
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

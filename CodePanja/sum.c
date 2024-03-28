#include<stdio.h>
int main()
{
    long long int n,j;
    scanf("%lld",&n);
    for(j=0;j<n;j++)
    {
        long long int s;
        long long int i,sum=0,t;
        scanf("%lld",&s);
        long long int A[s];
        for(i=0; i<s; i++)
        {
            scanf("%lld",&A[i]);
        }
        sum=A[s-1]+A[s-2];
        if(sum%2==0)
        {
            sum=sum+1;
        }
        t=sum-s;
        printf("S #%lld: %lld\n\n",j+1,t);
    }
    return 0;
}


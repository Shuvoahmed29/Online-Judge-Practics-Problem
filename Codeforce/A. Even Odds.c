#include<stdio.h>
int main()
{
    long long int n,k,p;
    scanf("%lld%lld",&n,&k);
    long long int A[n],t=0;
    for(p=1; p<=n; p++)
    {
        if(p%2!=0)
        {
            A[t]=p;
            t++;
        }
    }
    for(p=1; p<=n; p++)
    {
        if(p%2==0)
        {
            A[t]=p;
            t++;
        }
    }
    printf("%lld\n",A[k-1]);

}

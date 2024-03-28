#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld",&n);
    if(n%2==0)
    {
        printf("%lld\n",n/2);
    }
    else
    {
        k=-(n/2+1);
        printf("%lld\n",k);
    }
}


#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld%lld",&a,&b);
    if(a%2==0)
    {
        c=a/2;
    }
    else
    {
        c=(a+1)/2;
    }
    if(b<=c)
    {
        d=(b*2)-1;
    }
    else
    {
        d=(b-c)*2;
    }
    printf("%lld\n",d);
}

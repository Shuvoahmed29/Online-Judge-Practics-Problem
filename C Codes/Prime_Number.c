#include<stdio.h>
int main()
{
    long long i,n;
    scanf("%lld",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            printf("Not Prime\n");
            return 0;
    }
    printf("Prime!!");
    return 0;
}

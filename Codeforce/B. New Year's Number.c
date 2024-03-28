#include<stdio.h>
int main()
{
    int t,j,i;
    scanf("%d",&t);
    long long int n;
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        if(n<2021 || n<2020)
        {
            n=-1;
        }
        else if(n%2020==0 || n%2021==0)
        {
            n=0;
        }
        while(n>0)
        {
            if(n%2!=0)
            {
                n=n-2021;
            }
            else if(n%2==0)
            {
                n=n-2020;
            }
        }
        if(n==0)
            printf("YES\n");
        else if(n!=0)
            printf("NO\n");
    }
    return 0;
}

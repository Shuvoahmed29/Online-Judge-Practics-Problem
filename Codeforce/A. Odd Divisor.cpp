#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int t,i,k=0;
    scanf("%d",&t);
    long long int n;
    while(t-->0)
    {
        k=0;
        scanf("%lld",&n);
        for(i=3; i<=n;i=i+2)
        {
            if(n%i==0)
            {
                k++;
                break;
            }
        }
        if(k>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}


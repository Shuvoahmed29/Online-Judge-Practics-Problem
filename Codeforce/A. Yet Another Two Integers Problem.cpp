#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,i,j=0,sum;
        cin>>a>>b;
        if(a==b)
        {
            printf("0\n");
        }
        if(a<b)
        {
            sum=b-a;
            if(sum%10==0)
            {
                sum=sum/10;
                printf("%lld\n",sum);
            }
            else
            {
                sum=sum/10;
                sum=sum+1;
                printf("%lld\n",sum);
            }
        }
        if(a>b)
        {
            sum=a-b;
            if(sum%10==0)
            {
                sum=sum/10;
                printf("%lld\n",sum);
            }
            else
            {
                sum=sum/10;
                sum=sum+1;
                printf("%lld\n",sum);
            }
        }
    }
    return 0;
}

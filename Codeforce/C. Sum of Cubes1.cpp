#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,c,i,d,k=0,sum;
        cin>>x;
        c=cbrt(x);
        for(i=1;i<=c;i++)
        {
            d=x-pow(i,3);
            d=cbrt(d);
            sum=pow(i,3)+pow(d,3);
            if(sum==x && d>=1)
            {
                k++;
            }
        }
        if(k>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}

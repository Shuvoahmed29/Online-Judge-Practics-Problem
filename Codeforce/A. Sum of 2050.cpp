#include<iostream>
using namespace std;
#include <stdio.h>
#include <math.h>
int main()
{
    long long int t,digit=0;
    long long n,num,var=2050,count=0,i;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        num=n;
        count=0;
        while (n>0)
        {
            n=n/10;
            digit++;
        }

        if (num<2050)
        {
            printf("-1\n");
        }
        else
        {
            while (num>=2050)
            {
                if (num >= (var * pow(10,digit-4)))
                {
                    num -= (var* pow(10, digit-4));
                    count++;
                }
                else digit--;
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}

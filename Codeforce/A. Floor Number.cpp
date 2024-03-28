#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i=1,n,x,sum=2;
        cin>>n>>x;
        if(n==1 || n==2)
        {
            printf("1\n");
        }
        else
        {
            while(n>sum)
            {
                sum=sum+x;
                i++;
            }
            printf("%d\n",i);
        }
    }
    return 0;
}

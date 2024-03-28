#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,b,i,p,m;
        cin>>n>>k;
        b=n-k;
        p=k/2;
        p=p+b;
        cout<<p<<endl;
        for(i=k+1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        for(i=1; i<=(k/2); i++)
        {
            m=k-i;
            cout<<m<<" ";
        }
        printf("\n");
    }
    return 0;
}

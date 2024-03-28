#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x,s,q,k;
        cin>>n>>m>>x;
        s=x%n;
        if(s==0)
        {
            s=n;
        }
        q=(x+n-1)/n;
        k=(s-1)*m+q;
        cout<<k<<endl;
    }
    return 0;
}

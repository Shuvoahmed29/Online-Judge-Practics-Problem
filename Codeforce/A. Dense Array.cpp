#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,p,sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            int mx=max(a[i],a[i+1]);
            int mn=min(a[i],a[i+1]);
            p=mx/mn;
            while(p>2)
            {
                mn=mn*2;
                sum=sum+1;
                p=mx/mn;
            }
        }
        cout<<sum-1<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int k,n,i,j,temp=0,p;
        cin>>n>>k;
        p=n-k;
        string s,a="",b="";
        cin>>s;
        if(k==0)
        {
            cout<<"YES"<<endl;
        }
        else if(2*k==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0; i<k; i++)
            {
                a+=s[i];
            }
            for(i=n-1;i>=n-k;i--)
            {
                b+=s[i];
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

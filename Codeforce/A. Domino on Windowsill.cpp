#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k1,k2,w,b;
        cin>>n>>k1>>k2;
        cin>>w>>b;
        if(n==0 || k1==0 ||k2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

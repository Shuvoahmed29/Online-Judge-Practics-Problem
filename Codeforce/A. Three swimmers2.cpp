#include<iostream>
#include<stdio.h>
#include <cmath>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int p,a,b,c,d,e,f,m;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            d=p%a;
            d=a-d;
            e=p%b;
            e=b-e;
            f=p%c;
            f=c-f;
            m=d;
            if(m>e)
            {
                m=e;
            }
            if(m>f)
            {
                m=f;
            }
            cout<<m<<endl;
        }
    }
    return 0;
}

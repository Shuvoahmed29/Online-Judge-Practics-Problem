#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,p=0,l;
    cin>>n;
    if(n>=100)
    {
        p=p+ n/100;
        l=n/100;
        n=n-(100*l);
    }
    if(n>=20)
    {
        p=p+ n/20;
        l=n/20;
        n=n-(20*l);
    }
    if(n>=10)
    {
        p=p+ n/10;
        l=n/10;
        n=n-(10*l);
    }
    if(n>=5)
    {
        p=p+ n/5;
        l=n/5;
        n=n-(5*l);
    }
    if(n>=1)
    {
        p=p+ n/1;
        l=n/1;
        n=n-(1*l);
    }
    cout<<p<<endl;
    return 0;
}

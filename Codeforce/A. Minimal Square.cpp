#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,area,c=0,d=0,e=0;
        cin>>a>>b;
        c=(a+a);
        if(c>=b)
            c=c*c;
        else
            c=b*b;
        d=(a+b)*(a+b);
        e=(b+b);
        if(e>=a)
            e=e*e;
        else
            e=a*a;
        area=min(c,min(d,e));
        cout<<area<<endl;
    }
    return 0;
}

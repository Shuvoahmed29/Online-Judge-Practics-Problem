#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,p,maxi;
    int a,b,c;
    cin>>x>>y>>z>>p;
    maxi=max(x,max(y,max(z,p)));
    if(maxi==x)
    {
        /*a+b+c=x;
        a+b=y;
        a+c=z;
        b+c=p;*/

        a=x-p;
        c=z-a;
        b=p-c;
        cout<<a<<" "<<b<<" "<<c<<endl;
        return 0;
    }
    else if(maxi==y)
    {
        /*a+b+c=y;
        a+b=x;
        a+c=z;
        b+c=p;*/

        a=y-p;
        c=z-a;
        b=p-c;
        cout<<a<<" "<<b<<" "<<c<<endl;
        return 0;
    }
    else if(maxi==z)
    {
        /*a+b+c=z;
        a+b=y;
        a+c=x;
        b+c=p;*/

        a=z-p;
        c=x-a;
        b=p-c;
        cout<<a<<" "<<b<<" "<<c<<endl;
        return 0;
    }
    else if(maxi==p)
    {
        /*a+b+c=p;
        a+b=y;
        a+c=z;
        b+c=x;*/

        a=p-x;
        c=z-a;
        b=x-c;
        cout<<a<<" "<<b<<" "<<c<<endl;
        return 0;
    }
}

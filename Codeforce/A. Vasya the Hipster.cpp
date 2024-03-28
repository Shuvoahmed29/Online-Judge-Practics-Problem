#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,c,s;
    cin>>a>>b;
    d=min(a,b);
    c=max(a,b);
    s=c-d;
    s=s/2;
    cout<<d<<" "<<s<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,l,p,w;
    cin>>k>>r;
    w=k;
    for(int i=1;i<=9;i++)
    {
        k=w*i;
        p=k%10;
        if(p==r)
        {
            cout<<i<<endl;
            return 0;
        }
        else if(p==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}

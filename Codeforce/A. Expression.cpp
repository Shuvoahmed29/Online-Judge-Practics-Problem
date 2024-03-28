#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,A[5],i,mx;
    cin>>a>>b>>c;
    A[0]=a+(b*c);
    A[1]=a*(b+c);
    A[2]=(a*b*c);
    A[3]=(a+b)*c;
    A[4]=a+b+c;
    mx=A[0];
    for(i=1;i<=4;i++)
    {
        if(mx<A[i])
        {
            mx=A[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}

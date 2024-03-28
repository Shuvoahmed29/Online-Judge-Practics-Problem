#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t=240,cunt=0;
    cin>>n>>k;
    t=t-k;
    for(int i=1;i<=n;i++)
    {
        if(t>=5*i)
        {
            t=t-(5*i);
            cunt++;
        }
    }
    cout<<cunt<<endl;
    return 0;
}

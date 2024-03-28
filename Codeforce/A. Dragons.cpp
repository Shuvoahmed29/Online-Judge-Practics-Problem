#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,n,cunt=0,i;
    cin>>s>>n;
    pair<int,int>a[10000];
    for(i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i].first>=s)
        {
            cunt++;
            break;
        }
        else
        {
            s=s+a[i].second;
        }
    }

if(cunt>0)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
return 0;
}

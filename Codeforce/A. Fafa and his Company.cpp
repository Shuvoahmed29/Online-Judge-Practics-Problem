#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i;
    cin>>n;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}

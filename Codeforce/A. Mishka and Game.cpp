#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            sum1++;
        else if(b>a)
            sum2++;
    }
    if(sum1>sum2)
        cout<<"Mishka"<<endl;
    else if(sum2>sum1)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,i,sum=0,d;
        cin>>n;
        vector<long long int>vec;
        for(i=0; i<n; i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        for(i=0; i<n; i++)
        {
           sum=sum+vec[i];
           d=(i*(i+1))/2;
           if(sum<d)
           {
               break;
           }
        }
        if(sum>=d && i==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

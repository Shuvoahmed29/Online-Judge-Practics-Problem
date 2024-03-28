#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,sum=0,z,x,y,mx=0;
        cin>>n>>k;
        vector<long long int>vec,psum;
        for(i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
            sum+=x;
            psum.push_back(sum);
        }
        for(i=1;i<n;i++)
        {
            x=(((vec[i]*100)-(k*psum[i-1]))+k-1)/k;
            mx=max(mx,x);
        }
        cout<<mx<<endl;
    }
    return 0;
}

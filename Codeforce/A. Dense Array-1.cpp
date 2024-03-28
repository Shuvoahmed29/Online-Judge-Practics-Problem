#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,mx,mn,i,x,c=0;
        cin>>n;
        vector<long long int>vec;
        for(i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        for(i=0;i<n-1;i++)
        {
            mx=max(vec[i],vec[i+1]);
            mn=min(vec[i],vec[i+1]);
            while(mn*2<mx)
            {
                c++;
                mn*=2;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

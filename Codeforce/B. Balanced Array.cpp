#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum1=0,sum2=0,p,k;
        cin>>n;
        vector<int>vec;
        if(n%2==0)
        {
            if(n%4==0)
            {
                cout<<"YES"<<endl;
                vec.push_back(2);
                for(int i=1; i<=n; i++)
                {
                    if(i%2==0)
                    {
                        vec.push_back(i);
                        sum1=sum1+i;
                    }
                }
                for(int i=1; i<=n; i++)
                {
                    if(i%2!=0)
                    {
                        vec.push_back(i);
                        sum2=sum2+i;
                    }
                }
                p=sum1-sum2;
                k=p+vec[n];
                vec[n]=k;
                for(int i=1; i<=n; i++)
                {
                    cout<<vec[i]<<" ";
                }
                cout<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        long long int a[n],i,j,k=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            for(j=1;j<a[i];j++)
            {
                if(a[i]%j==0)
                {
                    sum=sum+j;
                }
            }
            if(sum!=a[i])
            {
                k++;
            }
            sum=0;
        }
        if(k>=1)
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

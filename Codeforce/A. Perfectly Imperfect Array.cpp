#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],i,j,p=0,k=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            for (j=2; j<=a[i]; j++)
            {
                if (j*j>=a[i])
                {
                    break;
                }
            }
            if (a[i]==1)
            {
                continue;
            }
            if (j*j!=a[i])
            {
                p=1;
            }
        }
        if (p==0)
        {
            cout <<"NO"<<endl;
        }
        else
        {
            cout <<"YES"<<endl;
        }
    }
    return 0;
}

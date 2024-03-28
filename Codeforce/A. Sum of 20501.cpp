#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k=0;
        cin>>n;
        if(n%2050!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            n=n/2050;
            while(n>0)
            {
                k=k+(n%10);
                n=n/10;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}

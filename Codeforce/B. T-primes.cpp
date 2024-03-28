#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000000]= {0};
    for(int i=2; i<=1000000; i++)
    {
        if(arr[i]==0)
        {
            for(int j=2; i*j<=1000000; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int t;
    cin>>t;
    long long int n;
    long long int sqr;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        sqr=sqrt(n);
        if(n==1)
            cout<<"NO"<<endl;
        else if((sqr*sqr==n)&&arr[sqr]==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

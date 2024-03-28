#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,p,i,j=0,l=0,m=0;
        cin>>n>>k;
        p=(n-1)/2;
        if(k>p)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    cout<<1+j<<" ";
                    j++;
                }
                else if(i%2!=0 && m<k)
                {
                    cout<<n-l<<" ";
                    l++;
                    m++;
                }
                else
                {
                    cout<<1+j<<" ";
                    j++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

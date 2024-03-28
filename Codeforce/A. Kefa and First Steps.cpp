#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    long long int t;
    cin>>t;
    long long int A[t],i,sum=0,p=1;
    for(i=0; i<t; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<t; i++)
    {
        if(A[i]>=A[i-1])
        {
            sum++;
            p=max(p,sum);
        }
        else
        {
            sum=1;
        }
    }
    cout<<p<<endl;
    return 0;
}

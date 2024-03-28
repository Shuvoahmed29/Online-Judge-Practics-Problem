#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int A[m],i;
    for(i=0;i<m;i++)
    {
        cin>>A[i];
    }
    if(m>n)
    {
       cout<<A[n]<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}

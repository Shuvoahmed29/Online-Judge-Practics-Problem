#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
int main()
{
    long long int t;
    cin>>t;
    long long int A[t],i;
    for(i=0;i<t;i++)
    {
        cin>>A[i];
    }
    sort(A,A+t);
    for(i=0;i<t;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}

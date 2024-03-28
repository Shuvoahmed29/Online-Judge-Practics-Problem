#include<iostream>
#include<stdio.h>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;
    set<long long int>s;
    set<long long int>::iterator it;
    while(n--)
    {
        long long int a;
        cin>>a;
        s.insert(a);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        sum++;
    }
    cout<<sum<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}

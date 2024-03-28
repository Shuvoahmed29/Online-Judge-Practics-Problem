#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,n,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n],w=1;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        vector<int>sh(a,a+n);
        vector<int>::iterator it;
        vector<int>::iterator it1;
        sort(sh.begin(),sh.end());
        it1=sh.begin();
        for(it=sh.begin();it!=sh.end();it++)
        {
            if(*it1==*it)
            {
                w=w+1;
            }
        }
        printf("%d\n",n-w+1);
    }
    return 0;
}

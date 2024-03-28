#include<iostream>
#include<stdio.h>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a,p=0;
        cin>>n;
        set<int>vec;
        for(i=0;i<n;i++)
        {
            cin>>a;
            vec.insert(a);
        }
        set<int>::iterator it;
        for(it=vec.begin();it!=vec.end();it++)
        {
            cout<<*it<<endl;
            p++;
        }
        cout<<(p-1)<<endl;
    }
    return 0;
}

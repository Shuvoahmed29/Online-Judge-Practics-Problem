#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iterator>
#include<bitset>
#define size 8
using namespace std;
int main()
{
    bitset<size> b(9);
    //b.set();
    //b.reset();
    cout<<b<<endl;
    cout<<b[0]<<endl;



    /*int i,n=5,a,p;
    vector<int>vec;
    vector<int>::iterator it;
    cout<<"Which Element: ";
    cin>>p;
    for(i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    it=upper_bound(vec.begin(),vec.end(),p);
    cout<<(it==vec.end())?"NOT FOUND")<<endl;*/
    //cout<<distance(vec.begin(),it)<<endl;
    /*it=find(vec.begin(),vec.end(),p);
    if(*it==p)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }*/
    return 0;
}

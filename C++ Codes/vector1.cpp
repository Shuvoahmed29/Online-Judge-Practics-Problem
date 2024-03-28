#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p;
    cout<<"Enter array Number: ";
    cin>>n;
    vector<int>vec;
    vector<int>::iterator it;
    for(i=0;i<n;i++)
    {
        vec.push_back(p);
        cin>>p;
    }
    /*for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<endl;
    }*/

    /*for(i=1;i<=vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }*/
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<"Sorting................"<<endl;
    sort(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}

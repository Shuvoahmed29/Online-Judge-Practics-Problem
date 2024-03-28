#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    vector<long long int>vec;
    vector<long long int>::iterator it;
    while(t--)
    {
        long long int n,x,i,p,j;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        long long int maxi = 0;

        for(i=0;i<n;i++)
        {
            if(vec[i]>maxi)
            {
                maxi=vec[i];
            }
        }
        /*for(i=0; i<n; i++)
        {
            if(vec[i]==n)
            {
                break;
            }
        }
        p=n-i;
        for(j=i; j<n; j++)
        {
            cout<<vec[j]<<" ";
        }*/
        it = std::max_element(vec.begin(),vec.end());
        cout<<*it<<endl;
        //it=find(vec.begin(),vec.end());
    }
}

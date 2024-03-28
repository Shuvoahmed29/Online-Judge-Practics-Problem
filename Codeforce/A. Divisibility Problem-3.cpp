#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,p;
    cin>>t;
    long long int a,b;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        p=a;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
          p=a%b;
          p=b-p;
          cout<<p<<endl;
        }
    }
    return 0;
}


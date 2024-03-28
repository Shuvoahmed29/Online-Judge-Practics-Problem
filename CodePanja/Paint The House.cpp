#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n,i,sum=0;
    n=s.length();
    for(i=0; i<n; i++)
    {
        if(s[i]=='R'|| s[i]=='r')
        {
            sum=sum+1;
            continue;
        }
        if(s[i]=='B'|| s[i]=='b')
        {
            sum=sum+1;
            continue;
        }
        if(s[i]=='Y'|| s[i]=='y')
        {
            sum=sum+1;
            continue;
        }
    }
    cout<<sum<<endl;
    return 0;
}

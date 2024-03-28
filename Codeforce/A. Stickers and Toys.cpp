#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,s,t,a;
        cin>>n>>s>>t;
        if(s<t)
        {
            a=n-s+1;
        }
        else
        {
            a=n-t+1;
        }
        cout<<a<<endl;
    }
    return 0;
}

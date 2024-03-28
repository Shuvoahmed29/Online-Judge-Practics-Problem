#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(str[0]=='T')
            sum=sum+4;
        else if(str[0]=='C')
            sum=sum+6;
        else if(str[0]=='O')
            sum=sum+8;
        else if(str[0]=='D')
            sum=sum+12;
        else if(str[0]=='I')
            sum=sum+20;
    }
    cout<<sum<<endl;
    return 0;
}

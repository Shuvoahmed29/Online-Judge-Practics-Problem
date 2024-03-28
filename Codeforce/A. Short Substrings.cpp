#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        string str;
        string cunt="";
        cin>>str;
        cunt=cunt+str[0]+str[1];
        for(j=3;j<str.size();j=j+2)
            cunt=cunt+str[j];
        cout<<cunt<<endl;
    }
    return 0;
}

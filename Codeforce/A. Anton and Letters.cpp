#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len,i,p=0;
    len=str.size();
    sort(str.begin(),str.end());
    for(i=0; i<len-1; i++)
    {
        if(str[i]=='{}' || str[i]==' ' || str[i]==',')
        {
            continue;
        }
        else
        {
            if(str[i]!=str[i+1])
                p++;
        }
    }
    cout<<p-1<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int cunt=0,c=0,i;
    cin>>str;
    for(i=1; i<str.size(); i++)
    {
        if(islower(str[i]))
            c++;
    }
    for(i=0; i<str.size(); i++)
    {
        if(isupper(str[i]))
           cunt++;
    }
    if(cunt==str.size())
    {
        for(i=0; i<str.size(); i++)
        {
            str[i]=towlower(str[i]);
        }
        cout<<str<<endl;
        return 0;
    }
    else if(islower(str[0]) && c==0)
    {
        str[0]=toupper(str[0]);
        for(i=1; i<str.size(); i++)
        {
            str[i]=towlower(str[i]);
        }
        cout<<str<<endl;
        return 0;
    }
    else
        cout<<str<<endl;
    return 0;
}

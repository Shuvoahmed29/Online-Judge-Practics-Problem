#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,len=0;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(),str.end());
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])
            len++;
    }
    if(len==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

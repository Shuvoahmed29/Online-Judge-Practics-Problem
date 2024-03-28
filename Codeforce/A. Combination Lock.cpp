#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,sum,sub,d,k,cunt=0;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0; i<n; i++)
    {
        sub=abs(str1[i]-str2[i]);
        c=min(str1[i],str2[i]);
        d=max(str1[i],str2[i]);
        sum=(10+c)-d;
        k=min(sub,sum);
        cunt=cunt+k;
    }
    cout<<cunt<<endl;
    return 0;
}


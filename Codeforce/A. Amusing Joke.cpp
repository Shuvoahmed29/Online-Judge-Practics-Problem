#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B,C,D;
    int len1,len2,i,j,p=0;
    cin>>A>>B>>C;
    D=A+B;
    sort(D.begin(),D.end());
    sort(C.begin(),C.end());
    if(C==D)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,p;
    cin>>n>>m>>k;
    p=min(m,k);
    if(p>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
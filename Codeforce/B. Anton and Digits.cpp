#include<bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int x=min(k2,min(k5,k6));
    int y=min(k3,k2-x);
    int ans=32*y+256*x;
    cout<<ans<<endl;
    return 0;
}
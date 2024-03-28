#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p,r,ans;
        cin>>n>>m;
        p=n*m;
        r=p%2;
        ans=(p/2)+r;
        cout<<ans<<endl;
    }
    return 0;
}
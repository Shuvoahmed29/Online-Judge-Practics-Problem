#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,ans=0;
        cin>>n>>m;
        if(n==1){
            cout<<0<<endl;
        }
        else{
            ans=min(2,n-1)*m;
            cout<<ans<<endl;
        }
    }
    return 0;
}
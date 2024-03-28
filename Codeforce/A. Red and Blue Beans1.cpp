#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int r,b,d;
        cin>>r>>b>>d;
        if(r!=b && d==0){
            cout<<"NO\n";
        }
        else if(r==b && d==0){
            cout<<"YES\n";
        }
        else{
            long long int maxi,mini;
            maxi=max(r,b);
            mini=min(r,b);
            long long int ans;
            d=d+1;
            ans=mini*d;
            if(ans>=maxi)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
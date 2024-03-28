#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long int ll;
void solve(){
    string s;cin>>s;
    string t;cin>>t;
    sort(t.begin(),t.end());
    ll len=t.size();
    ll ans=1;
    if(t[0]=='a'&&t[t.size()-1]=='a')ans=1;
    else if(t[0]=='a')ans=-1;
    else{
        for(ll i=1;i<=len;i++)ans=ans*2;
    }
    cout<<ans<<nl;
}
int main()
{
    ll tt;cin>>tt;
    while(tt--){
        solve();
    }
}

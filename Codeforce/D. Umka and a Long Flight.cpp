#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> vec;
bool solve(ll x,ll y,ll n){
    if(n==1) return true;
    if(min(y,vec[n+1]-y+1) > vec[n+1]-vec[n]) return false;
    y = min(y,vec[n+1]-y+1);
    return solve(y,x,n-1);
}
int main(){
    ll tt;  cin >> tt;
    vec.push_back(1);
    vec.push_back(1);
    for(ll i=0;i<50;i++){
        vec.push_back(vec[i]+vec[i+1]);
    }
    while(tt--){
        ll n,x,y;   cin >> n >> x >> y;
        if(solve(x,y,n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
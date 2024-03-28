#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        ll n;   cin >> n;
        vector<ll> vec(n+1);
        ll cunt = 0;
        for(ll i=1;i<=n;i++){
            cin >> vec[i];
            if(vec[i] == i) cunt++;
        }
        if(cunt!=0) cout << "YES" << '\n';
        else{
            for(ll i=1;i<=n;i++){
                for(ll j=i+1;j<=n;j++){
                    if(i==vec[j]) cunt++;
                }
            }
            if(cunt!=0) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
}
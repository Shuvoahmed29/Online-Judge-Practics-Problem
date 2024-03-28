#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;  cin >> n;
    vector<ll>vec(n);
    for(auto &d:vec) cin >> d;
    sort(vec.begin(), vec.end());
    ll k;  cin >> k;
    for(ll i = 0; i < k; i++){
        ll x, y;   cin >> x >> y;
        auto it1 = lower_bound(vec.begin(), vec.end(),x);
        auto it2 = upper_bound(vec.begin(), vec.end(),y);
        cout << it2 - it1 << ' ';
    }
}
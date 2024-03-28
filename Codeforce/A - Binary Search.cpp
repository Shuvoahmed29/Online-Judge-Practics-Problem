#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,k;    cin >> n >> k;
    vector<ll> vec1(n),vec2(k);
    for(auto &d:vec1) cin >> d;
    for(auto &d:vec2){
        cin >> d;
        if(binary_search(vec1.begin(),vec1.end(),d)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

}
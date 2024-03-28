#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        ll n;   cin >> n;
        string str = to_string(n);
        vector<ll> vec;
        while(n>0){
            ll r = n%9;
            vec.push_back(r);
            n/=9;
        }
        ll p=0;
        for(ll i=vec.size()-1;i>=0;i--){
            p = 10*p+vec[i];
        }
        str = to_string(p);
        replace(str.begin(), str.end(),'8','9');
        replace(str.begin(), str.end(),'7','8');
        replace(str.begin(), str.end(),'6','7');
        replace(str.begin(), str.end(),'5','6');
        replace(str.begin(), str.end(),'4','5');
        cout << str << endl;
    }
}
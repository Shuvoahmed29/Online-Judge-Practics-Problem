#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        ll n;   cin >> n;
        vector<ll> vec;
        if(n%2 == 0) cout << -1 << '\n';
        else{
            vec.push_back(n);
            while(n!=3){
                if(n==1) break;
                ll f = (n-1)/2;
                ll s = (n+1)/2;
                if(f%2!=0){
                    vec.push_back(f);
                    n = f;
                }
                else if(s%2!=0){
                    vec.push_back(s);
                    n = s;
                }
            }
            sort(vec.begin(), vec.end());
            // for(auto it:vec) cout << it << " ";
            // cout << endl;
            if(vec.size()>40) cout << -1 << '\n';
            else cout << vec.size() << '\n';
            ll p=1;
            for(ll i=0;i<vec.size();i++){
                if(((2*p)-1) == vec[i]){
                    cout << 1 << " ";
                    p = (2*p)-1;
                }
                else if(((2*p)+1) == vec[i]){
                    cout << 2 << " ";
                    p = (2*p)+1;
                }
            }
            cout << endl;
        }
    }
}
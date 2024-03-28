#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        ll n,m; cin >> n >> m;
        string str; cin >> str;
        ll p=-1;
        for(ll i=0;i<n;i++){
            if(str[i]-'0'<m){
                // cout << m << str[i];
                p = i;
                break;
            }
        }
        for(ll i=0;i<n;i++){
            if(i!=p) cout << str[i];
            else{
                cout << m << str[i];
            }
        }
        if(p==-1) cout << m;
        cout << endl;
    }
}
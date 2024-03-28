#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        string str; cin >> str;
        ll one = 0,n=str.size();
        for(ll i=0;i<n;){
            ll cunt = 0;
            if(str[i]=='1'){
                while(i<n && str[i]=='1'){
                    cunt++; i++;
                }
                one = max(one,cunt);
            }
            else{
                i++;
            }
        }
        ll cunt = 0;
        for(ll i=0;i<n;i++){
            if(str[i]=='0') break;
            cunt++;
        }

        for(ll i=n-1;i>=0;i--){
            if(str[i]=='0') break;
            cunt++;
        }
        
        cunt = min(cunt,n);
        one = max(one,cunt);
        if(one == n){
            cout << one*one << endl;
        }
        else{
            one++;
            ll l = one/2;
            ll b = one-l;
            cout << l*b << endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        string str; cin >> str;
        ll len = str.size();
        ll cunt=1;
        if(str[0]=='?') cunt = 9;
        for(ll i=1;i<len;i++){
            if(str[i]=='?') cunt = cunt*10;
        }
        if(str[0]=='0') cunt = 0;
        cout << cunt << endl;
    }
}
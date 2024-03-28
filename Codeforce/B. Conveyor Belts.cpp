#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;  cin >> tt;
    while(tt--){
        ll n,a,b,c,d;   cin >> n >> a >> b >> c >> d;
        a--; b--;c--;d--;
        a=min(a,n-1-a);
        b=min(b,n-1-b);
        c=min(c,n-1-c);
        d=min(d,n-1-d);
        cout << abs(min(a,b)-min(c,d)) << endl;
    }
}
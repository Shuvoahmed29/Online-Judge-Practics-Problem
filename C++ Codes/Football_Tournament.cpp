#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
    code();
    int tt;    cin >> tt;
    while(tt--){
        int n;    cin >> n;
        double k = sqrt(1+8*n);
        if(k == (int) k){
            int x1 = (1+k)/2;
            int x2 = (1-k)/2;
            if(x1>0) cout << x1 << endl;
            else if(x2>0)    cout << x2 << endl;
        }
        else cout << -1 << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        char c; cin >> c;
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e'|| c == 'f' || c == 'r' || c == 's'){
            cout << "YES\n";
        }else cout << "NO\n";
    }
}
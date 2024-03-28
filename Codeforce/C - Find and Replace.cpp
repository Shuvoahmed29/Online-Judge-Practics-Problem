#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n;  cin >> n;
        string str; cin >> str;
        bool ok = true;
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                if(str[i] == str[j]){
                    if(i%2!=0 && j%2==0) ok = false;
                    else if(i%2==0 && j%2!=0) ok = false;
                }
            }
        }
        if(ok)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
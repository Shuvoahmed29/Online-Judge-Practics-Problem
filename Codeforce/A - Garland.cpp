#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;   cin >> tt;
    while(tt--){
        string str; cin >> str;
        map<char,int> mp;
        for(int i=0;i<4;i++){
            mp[str[i]]++;
        }
        sort(str.begin(), str.end());
        if(mp.size() == 1) cout << -1 << '\n';
        else if(mp.size() == 4 || mp.size() == 3) cout << 4 << '\n';
        else if(mp.size() == 2){
            if(str[0] == str[2]) cout << 6 << '\n';
            else if(str[1] == str[3]) cout << 6 << '\n';
            else cout << 4 << '\n';
        }
        mp.clear();
    }
}
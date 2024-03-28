#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt; cin >> tt;
    while(tt--){
        long long n;  cin >> n;
        string str; cin >> str;
        int ans = -1;
        map<char,int> mp, mp1;
        for(int i = 0; i < n; ++i) mp[str[i]]++;
        for(int i = 0; i < n; ++i){
            mp[str[i]]--;
            if(mp[str[i]]==0) mp.erase(str[i]);
            mp1[str[i]]++;
            int p = mp.size()+mp1.size();
            ans = max(ans,p);
        }
        cout << ans << endl;
    }
}
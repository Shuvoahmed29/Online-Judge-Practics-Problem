#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        string str;     cin >> str;
        int x=0,y=0,p=0;
        for(int i = 0; i<n; ++i){
            if(str[i] == 'U') y++;
            else if(str[i] == 'D') y--;
            else if(str[i] == 'R') x++;
            else if(str[i] == 'L') x--;
            if(x==1 && y==1){
                p=1;
                break;
            }
        }
        if(p==1) cout << "YES\n";
        else cout << "NO\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main() {
	code();
    int tt; cin >> tt;
    while(tt--){
        int n,m;    cin >> n >> m;
        vector<int>vec1(n),vec2(m),ans;
        int x=0,all=0;
        for(int i=0;i<n;i++){
            cin >> vec1[i];
            x ^=vec1[i];
        }
        ans.push_back(x);
        for(int i=0;i<m;i++){
            cin >> vec2[i];
            all |=vec2[i];
        }
        int y=0;
        for(int i=0;i<n;i++){
            y^=vec1[i]|all;
        }
        cout << min(x,y) << " "<<max(x,y)<<endl;
    }
}
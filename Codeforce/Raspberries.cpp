#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
#define int long long
int32_t main(){
	//code();
	int tt;	cin >> tt;
	while(tt--){
		int n,k;	cin >> n >> k;
		vector<int>vec(n);
		int pro=1;
		int mn = INT_MAX;
		for(int i=0;i<n;i++) {
            cin >> vec[i];
            pro = pro*vec[i];
		}
		if(pro%k == 0) cout << 0 << endl;
		else{
            for(int i=0;i<n;i++){
                int mult = pro/vec[i];
                for(int j=1;j<=5;j++){
                    int w = mult * (vec[i]+j);
                    if(w%k==0){
                        mn = min(mn,j);
                    }
                }
            }
            cout << mn << endl;
		}
	}
}


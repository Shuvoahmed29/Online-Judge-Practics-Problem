#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		int mx=-1,ans=0;
		for(int i=0;i<n;i++){
			int w,q;	cin >> w >> q;
			if(w>10) continue;
			if(q>mx){
				mx = q;
				ans = i+1;
			}
		}
		cout << ans << endl;
	}
}

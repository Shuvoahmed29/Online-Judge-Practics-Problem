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
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		int matrix[n][n];
		vector<int>ans;
		for(int i=0;i<n;i++){
			int p = 1073741823; //2^30-1
			for(int j=0;j<n;j++){
				cin >> matrix[i][j];
				if(i==j) continue;
				p &= matrix[i][j];
			}
			ans.push_back(p);
		}
		bool ok = false;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i != j){
					if(matrix[i][j] != (ans[i] | ans[j]) ){
						cout << "NO\n";
						ok = true;
						break;
					}
				}
			}
			if(ok) break;
		}
		if(!ok){
			cout << "YES\n";
			for(auto it:ans) cout << it << ' ';
			cout << endl;
		}
	}
}

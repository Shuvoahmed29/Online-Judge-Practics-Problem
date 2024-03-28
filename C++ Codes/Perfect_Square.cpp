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
		string str[n];
		for(int i=0;i<n;i++)	cin >> str[i];
		int ans = 0;
		for(int i=0;i<n/2;i++){
			for(int j=0;j<n/2;j++){
				char ch[4] = {str[i][j],str[j][n-i-1],str[n-i-1][n-j-1],str[n-j-1][i]};
				// cout << ch << endl;
				char mx = max(max(ch[0],ch[1]),max(ch[2],ch[3]));
				for(int p=0;p<4;p++) ans += mx-ch[p];
			}
		}
		cout << ans << endl;

	}
}

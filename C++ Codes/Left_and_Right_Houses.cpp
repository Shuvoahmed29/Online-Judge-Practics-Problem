#include<bits/stdc++.h>
using namespace std;
int main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		string str;	cin >> str;
		vector<int>prefix(n+1);
		prefix[0] = 0;
		for(int i=0;i<n;i++){
			prefix[i+1] = prefix[i]+str[i]-'0';
		}
		int ans = -1;
		for(int i=0;i<=n;i++){
			int left = i-prefix[i];
			int right = prefix[n]-prefix[i];
			if(2*left>=i && 2*right>=n-i){
				if(ans == -1 || abs(n-2*i)<abs(n-2*ans)){
					ans = i;
				}
			}
		}
		cout << ans << endl;
	}
}
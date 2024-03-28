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
		int n,h;	cin >> n >> h;
		vector<int>vec(n);
		int sum=0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			sum+=vec[i];
		}
		if(h>sum) {
			cout << 0 << endl;
			continue;
		}
		sort(vec.begin(),vec.end());
		int diff = abs(sum-h)+1;
		int ans=1;
		for(int i=0;i<n;i++){
			int p=0,cunt=0;
			for(int j=0;j<n;j++){
				if(vec[j]<=ans) p+=vec[j];
				if(vec[j]>ans) break;
				if(p>=diff) break;
			}
			if(p>=diff){
				break;
			}
			ans++;
		}
		cout << ans << endl;
	}
}

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
		int n,k;	cin >> n >> k;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		sort(vec.begin(),vec.end());
		int mx=-1,cunt=0;
		for(int i=0;i<n-1;i++){
			int p = vec[i+1]-vec[i];
			if(p<=k) cunt++;
			else{
				mx = max(mx,cunt);
				cunt=0;
			}
		}
		mx = max(mx,cunt);
		int ans = n-mx-1;
		if(ans<0) cout << 0 << endl;
		else cout << ans << endl;
	}
}

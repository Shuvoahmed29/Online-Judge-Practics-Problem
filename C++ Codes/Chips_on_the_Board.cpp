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
		vector<int>vec(n),vec2(n);
		int ans1=0,ans=0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			ans+=vec[i];
		}
		for(int i=0;i<n;i++)	{
			cin >> vec2[i];
			ans1+=vec2[i];
		}
		sort(vec2.begin(),vec2.end());
		sort(vec.begin(),vec.end());
		cout << min(ans + n*vec2[0],ans1+n*vec[0]) << endl;
	}
}

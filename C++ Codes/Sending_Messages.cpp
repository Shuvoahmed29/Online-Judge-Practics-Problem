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
		int n,f,a,b;	cin >> n >> f >> a >> b;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		int previous = 0,mini = INT_MAX;
		for(int i=0;i<n;i++){
			mini = min(b,abs(previous-vec[i])*a);
			f -= mini;
			previous = vec[i];
		}
		if(f>0)	cout << "YES\n";
		else cout << "NO\n";
	}
}

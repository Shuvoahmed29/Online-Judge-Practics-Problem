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
		for(int i=0;i<n;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		if (binary_search(vec.begin(), vec.end(), k)) cout << "YES\n";
		else cout << "NO\n";
	}
}

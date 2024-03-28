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
		vector<int>vec(n);
		for(int i=0;i<n;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		int p=vec[0];
		vec.erase(vec.begin());
		int ans=1;
		vec.insert(vec.begin(),p+1);
		for(auto it:vec) ans*=it;
		cout <<ans << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
bool isOk(int mid,vector<int>vec,int x){
	int p=0;
	for(int i=0;i<vec.size();i++){
		if(mid<vec[i]) continue;
		p+=mid-vec[i];
	}
	return p<=x;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,x;	cin >> n >> x;
		vector<int>vec(n);
		int ans=0,lcm;
		for(int i=0;i<n;i++)cin >> vec[i];
		int left=0,right=1e12+9,mid;
		while(right-left>1){
			mid = (left+right)/2;
			if(isOk(mid,vec,x)) left = mid;
			else right = mid-1;
		}
		if(isOk(right,vec,x)) cout << right <<'\n';
		else cout << left << '\n';
	}
}

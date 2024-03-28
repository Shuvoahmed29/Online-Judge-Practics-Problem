#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n+10];
	int prefix[n];
	prefix[0]=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		prefix[i] = prefix[i-1]+arr[i];
	}
	int q; cin>>q;
	while(q--){
		int l,r; cin>>l>>r;
		int ans = prefix[r]-prefix[l-1];
		cout<<ans<<'\n';
	}
}
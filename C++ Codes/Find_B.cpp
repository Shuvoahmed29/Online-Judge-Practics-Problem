#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int prefix[300007],suff[300007];
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,q;	cin >> n >> q;
		vector<int>vec(n+1);
		for(int i=1;i<=n;i++){
			cin >> vec[i];
			prefix[i] = prefix[i-1]+vec[i];
			suff[i] = suff[i-1];
			if(vec[i]==1) suff[i]+=2;
			else suff[i]+=1;
		}
		while(q--){
			int left,right;	cin >> left >> right;
			if(left==right)	cout << "NO\n";
			else if(suff[right]-suff[left-1]>prefix[right]-prefix[left-1]) cout << "NO\n";
			else cout << "YES\n";
		}
	}
}
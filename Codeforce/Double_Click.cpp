#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int n,m;	cin >> n >> m;
	vector<int>vec(n);
	for(int i=0;i<n;i++)	cin >> vec[i];
	bool ok = false;
	for(int i=0;i<n-1;i++){
		if(vec[i+1]-vec[i]<=m){
			cout << vec[i+1] << endl;
			ok = true;
			break;
		}
	}
	if(!ok) cout << -1 << endl;
}
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
	int n,m,k;	cin >> n >> m >> k;
	int arr[n+1][m+1];
	vector<int>vec;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> arr[i][j];
			vec.push_back(arr[i][j]);
		}
	}
	int p=1,total=0,mx=-1;
	for(int j=p;j<=p+k-1;j++){
		for(int i=1;i<=n;i++){
			mx = max(mx,arr[i][j]);
		}
		// cout << "Mx: " << mx << endl;
		// total += mx;
		// mx=-1;
		// p++;
		// if(p>m-k+1) break;
	}
	cout << "Total: " << mx << endl;
}

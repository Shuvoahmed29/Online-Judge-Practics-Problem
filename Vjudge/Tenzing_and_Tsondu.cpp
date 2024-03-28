#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n,m;	cin >> n >> m;
		vector<int>vec(n);
		int sum=0,sum1=0;
		for(int i=0;i<n;i++) {
			cin >> vec[i];
			sum+=vec[i];
		}
		vector<int>vec1(m);
		for(int i=0;i<m;i++){
			cin >> vec1[i];
			sum1+=vec1[i];
		}
		if(sum==sum1) cout << "Draw\n";
		else if(sum>sum1) cout << "Tsondu\n";
		else cout << "Tenzing\n";

	}
}
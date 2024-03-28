#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n,m;	cin >> n >> m;
		vector<int>vec(n),vec1;
		for(int i=0;i<n;i++) cin >> vec[i];
		int sum=0;
		for(int i=0;i<n-1;i++){
			vec1.push_back(abs(vec[i]-vec[i+1]));
		}
		sort(vec1.begin(),vec1.end());
		for(int i=0;i<n-m;i++){
			sum+=vec1[i];
		}
		cout << sum << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int n,q;
	int tt=1;
	while(cin >> n >> q && n != 0 && q!=0 ){
		cout << "CASE# "<<tt<<":\n";
		tt++;
		vector<int>vec(n);
		for(int i=0;i<n;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		for(int i=0;i<q;i++){
			int x;	cin >> x;
			auto it = lower_bound(vec.begin(),vec.end(),x);
			if(it!=vec.end() && vec[it-vec.begin()]==x) cout << x << " found at " << it+1-vec.begin() << endl;
			else cout << x << " not found\n";
		}
	}
}
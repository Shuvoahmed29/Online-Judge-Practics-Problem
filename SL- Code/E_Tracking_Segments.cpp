#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;	cin >> tt;
	while(tt--){
		int n,m;	cin >> n >> m;
		vector<int>vec(n+1,0);
		vector<pair<int,int>>pr;
		int ans = -1;
		for(int i=0;i<m;i++){
			int x,y;	cin >> x >> y;
			pr.push_back(make_pair(x,y));
		}
		int q; cin >> q;
		int p=0,cunt=-1;
		bool ok = false;
		while(q--){
			int idx;	cin >> idx;
			vec[idx] = 1;
			p++; 
			for(auto it:pr){
				int zero=0;
				int one = 0;
				for(int i=it.first;i<=it.second;i++){
					if(vec[i] == 0) zero++;
					else if(vec[i] == 1) one++;
					if(zero>one) break;
				}
				// cout << zero << " " << one << endl;
				if(one>zero && ok == false) {
					cunt = p;
					ok = true;
				}
			}
			// cout << "............."<< cunt<<endl;
		}
		cout << cunt << endl;
	}
}
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
	int tt;	cin >> tt;
	while(tt--){
		int a,b;	cin >> a >> b;
		int x,y,p,q; cin >> x >> y >> p >> q;
		int cunt = 0;
		vector<int> dx ={-a,-a,a,a,b,b,-b,-b};
		vector<int> dy ={-b,b,b,-b,a,-a,a,-a};
		set<pair<int,int>>st;
		for(int i=0;i<8;i++){
			int idx = p+dx[i],j = q+dy[i];
			for(int z=0;z<8;z++){
				int u = idx+dx[z],v = j+dy[z];
				if(u == x && v == y){
					if(st.find({idx,j}) != st.end()) continue;
					cunt++;
					st.insert({idx,j});
				}
			}
		}
		cout << cunt << endl;
		
	}	
}

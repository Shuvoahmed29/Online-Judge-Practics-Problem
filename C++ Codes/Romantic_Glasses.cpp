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
		int n;	cin >> n;
		vector<int>vec(n);
		set<int>st;
		st.insert(0);
		int sum = 0;
		bool ok = false;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(i%2==0) vec[i] *= -1;
			sum += vec[i];
			if(st.find(sum) != st.end())  ok = true;
			st.insert(sum);
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}

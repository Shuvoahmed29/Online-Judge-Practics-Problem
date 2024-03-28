#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n,k,x;	cin >> n >> k >> x;
		vector<int>vec;
		for(int i=1;i<=k;i++){
			if(i!=x) vec.push_back(i);
			// if(i>x) break;
		}
		// for(auto it:vec) cout << it << " ";
		// cout << endl;
		bool ok = false;
		for(int i=0;i<vec.size();i++){
			if(n%vec[i] == 0){
				cout << "YES\n";
				int p = n/vec[i];
				cout << p << endl;
				for(int j=0;j<p;j++) cout << vec[i] << " ";
				cout << endl;
				ok = true;
			}
			else if(n%vec[i] == x) ok = false;
			else{
				int p = n/vec[i];
				cout << "YES\n";
				cout << p+1 << endl;
				cout << n%vec[i] << " ";
				for(int j=0;j<p;j++) cout << vec[i] << " ";
				cout << endl;
				ok = true;
			}
			if(ok == true) break;
		}
		// cout << vec.size();
		if(ok==false) cout << "NO\n";
	}
}
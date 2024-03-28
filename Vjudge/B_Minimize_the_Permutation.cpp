#include <bits/stdc++.h>
using namespace std;
int main() {
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin >> vec[i];
		}
		
		int now = 0;
		while(now<n){
			int idx = min_element(vec.begin()+now,vec.end())-vec.begin();
			int data = vec[idx];
			vec.erase(vec.begin()+idx);
			vec.insert(vec.begin()+now, data);
			if(idx==now) now=idx+1;
			else now = idx;
		}
		for(auto it:vec) cout << it << " ";
		cout << endl;
	}
}
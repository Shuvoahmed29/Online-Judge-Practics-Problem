#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int n;	cin >> n;
	vector<int>vec(n);
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin >> vec[i];
		mp[vec[i]]++;
	}
	sort(vec.begin(),vec.end());
	int cunt = 0;
	for(auto it:mp){
		cunt += it.second*(n-it.second);
		
		n = n-it.second;
	}
	cout << cunt << endl;
}
// 1 1 1 1 2 3 4 4 4 5 5 5 6 6 7 8 8 9 9 9
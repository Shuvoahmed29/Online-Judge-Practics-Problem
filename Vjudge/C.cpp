#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		map<int,int>mp;
		set<int>se;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			se.insert(vec[i]);
			mp[vec[i]]++;
		}
		int cunt=0,k=0,sing=0;
		for(auto it:mp){
			if(it.second>=2){
				cunt++;
				if(it.second%2!=0) k++;
			}
			else sing++;
		}
		if(cunt==0){
			cout << "YES\n";
			sort(vec.begin(),vec.end());
			for(auto it:vec) cout << it << " ";
			cout << endl;
		}
		else{
			if(k!=0) cout << "NO" << endl;
			else if(sing<=1 && k==0){
				cout << "YES" << endl;
				sort(vec.begin(),vec.end());
				vector<int> vec1;
				for(auto it:se){
					cout << it << " ";
					vec1.push_back(it);
				}
				int p=0;
				if(n%2==0) p=1;
				else p=2;
				for(int i=vec1.size()-p;i>=0;i--){
					cout << vec1[i] << " ";
				}
				cout << endl;
			}
			else cout << "NO\n";
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		map<int,int>mp;
		int sum = 0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			sum += vec[i];
			mp[vec[i]%3]++;
		}
		if(sum%3 == 0)	cout << 0 << endl;
		else if(sum%3 == 2) cout << 1 << endl;
		else if(sum%3==1 && mp[1]>0) cout << 1 << endl;
		else cout << 2 << endl;
	}
}
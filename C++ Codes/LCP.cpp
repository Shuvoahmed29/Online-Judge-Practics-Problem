#include<bits/stdc++.h>
using namespace std;
int main(){
	int tt;	cin >> tt;
	for(int k=1;k<=tt;k++){
		int n;	cin >> n;
		string str[n],s;
		for(int i=0;i<n;i++) {
			cin >> s;
			reverse(s.begin(),s.end());
			str[i] = s;
		}
		int mn = 1e9;
		if(n==1){
			cout<<"Case "<<k<<": "<< str[0].size() << ' ';
			reverse(str[0].begin(),str[0].end());
			cout <<str[0] << endl;
			continue;
		}
		for(int i=1;i<n;i++){
			int ans = 0;
			for(int j=0;j<str[i].size();j++){
				if(str[0][j]==str[i][j]) ans++;
				else break;
			}
			mn = min(ans,mn);
		}
		cout<<"Case "<<k<<": "<<mn<<' ';
		for(int i=mn-1;i>=0;i--) cout << str[0][i];
		cout << endl;
	}
}
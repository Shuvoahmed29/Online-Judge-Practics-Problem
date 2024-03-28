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
		string str;	cin >> str;
		reverse(str.begin(),str.end());
		vector<int>vec1;
		int temp = 0,zero=0;
		for(int i=0;i<n;i++){
			if(str[i]!='0') temp = -1;
			else{
				zero++;
				vec1.push_back(i-vec1.size());
			}
		}
		vector<int>vec2(n,0);
		//cout << str << endl;
		

		for(int i=0;i<vec1.size();i++){
			if(i<=0) vec2[i] = vec1[i];
			else{
				vec2[i] = vec1[i]+vec2[i-1];
			}
		}
		
		int p = 1;
		bool ok=p<=n;
		while(ok){
			if(zero>=p) cout << vec2[p-1] << " ";
			else cout << -1 << " ";
			p++;
			ok=p<=n;
		}
		cout << endl;
	}
}

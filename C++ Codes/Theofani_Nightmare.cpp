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
		for(int i=0;i<n;i++)	cin >> vec[i];
		int sum = 0;
		vector<pair<int,int>>pr(n+1,{0,1});
		pr[n] = {0,1};
		for(int i=n-1;i>=0;i--){
			int total = pr[i+1].first;
			int cunt = pr[i+1].second;
			pr[i] = {total+vec[i],cunt};
			pr[i] = max(pr[i],make_pair(total+sum+vec[i],cunt+1));
			sum += vec[i];
		}
		cout << pr[0].first << endl;
	}
}
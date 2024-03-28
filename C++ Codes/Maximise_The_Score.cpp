#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(2*n);
		for(int i=0;i<2*n;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		int score=0;
		for(int i=0;i<2*n;i+=2){
			score += vec[i];
		}
		cout << score << endl;
	}
}
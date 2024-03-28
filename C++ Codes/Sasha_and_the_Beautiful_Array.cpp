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
		vector<int> vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		sort(vec.begin(),vec.end());
		int sum = 0;
		for(int i=0;i<n-1;i++){
			sum += vec[i+1]-vec[i];
		}
		cout << sum << endl;
	}
}
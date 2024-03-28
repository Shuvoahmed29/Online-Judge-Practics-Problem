#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int N = 1e5+7;
vector<bool>isPrime(N,true);
int32_t main(){
	code();
	cout << 12;
	// isPrime[0]=isPrime[1]=false;
	// vector<int>vec;
	// for(int i=2;i<=N;i++){
	// 	if(isPrime[i]){
	// 		vec.push_back(i);
	// 		for(int j=2*i;j<=N;j+=i){
	// 			isPrime[j] = false;
	// 		}
	// 	}
	// }
	// int tt;	cin >> tt;
	// while(tt--){
	// 	int x,y;	cin >> x >> y;
	// 	int dif = abs(x-y);
	// 	bool p=false;
	// 	for(auto it:vec){
	// 		if(dif%it==0){
	// 			p=true;
	// 			break;
	// 		}
	// 	}
	// 	if(p) cout <<"YES\n";
	// 	else cout << "NO\n";
	// }
}

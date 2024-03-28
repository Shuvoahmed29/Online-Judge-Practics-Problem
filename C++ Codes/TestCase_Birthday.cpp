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
		int k = 1+rand()%32;
		cout << k <<' ';
		cout << "February ";
		k = (1000+rand())%9999;
		if(k<1000) k += (1000-k);
		cout << 1796 << endl;
	}
}
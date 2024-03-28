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
		int a,b,n;	cin >> a >> b >> n;
		vector<int>vec(n);
		int sum=0;
		if(b>=a) {
			sum=a;
			b=a;
		}
		else sum=b;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(vec[i]+1<=a) sum+=vec[i];
			else sum+=a-1;
		}
		cout << sum << endl;
	}
}

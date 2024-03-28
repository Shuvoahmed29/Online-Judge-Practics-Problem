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
		for(int i=0;i<n;i++) cin >> vec[i];
		int operation = 0;
		for(int i=n-1;i>0;i--){
			if(vec[i]<vec[i-1]){
				int r = (vec[i-1]-1)/vec[i];
				operation += r;
				vec[i-1] = vec[i-1]/(r+1);
			}
		}
		cout << operation << endl;
	}
}

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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tt,i,j,cunt=0,n;	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int>vec(n);
		for(i=0;i<n;i++) cin >> vec[i];
		cunt=0;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(vec[j]-vec[i]==j-i) cunt++;
			}
		}
		cout << cunt << '\n';
	}
}

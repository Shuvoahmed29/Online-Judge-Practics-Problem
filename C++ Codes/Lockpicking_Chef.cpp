#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,m;	cin >> n >> m;
		string str,lock;	cin >> str >> lock;
		int ans = INT_MAX;
		int k=0;
		for(int i=0;i<n;i++){
			int p = 0;
			if(i+m-1==n){
				cout << ans << endl;
				k=1;
			}
			for(int j=i;j<i+m;j++){
				p +=min((10+(lock[j-i]-'0')-(str[j]-'0'))%10 ,(10-(lock[j-i]-'0')+(str[j]-'0'))%10);
			}
			ans = min(ans,p);
		}
		if(k==0)cout << ans << endl;
	}
}

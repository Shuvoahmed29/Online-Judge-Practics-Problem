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
	int tt,n=11;	cin >> tt;
	while(tt--){
		char ch[n][n];
		for(int i=1;i<n;i++){
			for(int j=1;j<n;j++) cin >> ch[i][j];
		}
		int ans=0;
		for(int i=1;i<n;i++){
			for(int j=1;j<n;j++){
				if(ch[i][j]=='X'){
					if(i<=5){
						if(j<=5)ans+=min(i,j);
						else ans+=min(i,n-j);
					}
					else{
						if(j<=5) ans+=min(n-i,j);
						else ans+=min(n-i,n-j);
					}
				}
			}
		}
		cout << ans << endl;
	}
}

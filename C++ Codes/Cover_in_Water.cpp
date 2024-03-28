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
		int n;	cin >> n;
		string str;	cin >> str;
		int ans = 0,cunt = 0;
		for(int i=0;i<n;i++){
			if(str[i]=='.'){
				cunt++;
				ans++;
			}
			else cunt = 0;
			if(cunt >= 3) break;
		}
		if(cunt >= 3)	cout << 2 << endl;
		else cout << ans << endl;
	}
}

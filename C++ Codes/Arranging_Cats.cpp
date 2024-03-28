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
		string str1,str2;	cin >> str1 >> str2;
		int one = 0,cunt = 0, one2 = 0;
		for(int i=0;i<n;i++){
			if(str1[i] == '1') one++;
			if(str2[i] == '1') one2++;
			if(str2[i] != str1[i] && str2[i] == '1') cunt++;
		}
		int ans = cunt;
		if(one > one2) ans += (one-one2);
		cout << ans << endl;
	}
}

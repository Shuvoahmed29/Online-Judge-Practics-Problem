#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int value[1000005];
int vec[26][1000005];
int cunt = 1;
int32_t main(){
	code();
	int n;	cin >> n;
	string str[n+1];
	int ans = 0;
	for(int i=1;i<=n;i++){
		cin >> str[i];
		ans += str[i].size()*(n*2);
		int cunt = 0;
		for(int j=0;j<str[i].size();j++){
			if(!vec[str[i][j]-'a'][cunt]){
				vec[str[i][j]-'a'][cunt] =::cunt;
				cunt = :: cunt++;
			}
			else	cunt = vec[str[i][j]-'a'][cunt];
			value[cunt]++;
		}
	}
	for(int i=1;i<=n;i++){
		reverse(str[i].begin(),str[i].end());
		int cunt = 0,sum = 0;
		for(int j=0;j<str[i].size();j++){
			if(!vec[str[i][j]-'a'][cunt]) break;
			else	cunt = vec[str[i][j]-'a'][cunt];
			sum += value[cunt];
		}
		ans -= sum*2;
	}
	cout << ans << endl;
}

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
		int n;	cin >> n;
		string str;	cin >> str;
		int start = 0,end = 0;
		for(int i=0;i<n;i++){
			if(str[i]=='B' && start == 0) start = i+1;
			if(str[i] == 'B' && start !=0 ) end = i+1;
		}
		cout << abs(start-end)+1 << endl;
	}
}
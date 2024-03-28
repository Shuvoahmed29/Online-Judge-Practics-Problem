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
		int n,k;	cin >> n >> k;
		string str;
		char ch = 'a';
		for(int i=0;i<k;i++){
			str+=ch;
			ch++;
		}
		string answer;
		for(int i=0;i<n;i++){
			answer+=str;
		}
		cout << answer << endl;
	}
}
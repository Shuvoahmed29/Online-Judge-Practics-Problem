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
		if(n!=5) cout << "NO\n";
		else{
			sort(str.begin(),str.end());
			if(str=="Timru")cout<<"YES\n";
			else cout << "NO\n";
		}
	}
}

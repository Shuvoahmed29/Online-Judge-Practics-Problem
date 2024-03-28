#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int  long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n,m;	cin >> n >> m;
		string str,temp;	cin >> str >> temp;
		bool ok = true,p = true;
		for(int i=0;i<n-1;i++){
			if(str[i]==str[i+1]){
				ok = false;
				break;
			}
		}
		for(int i=0;i<m-1;i++){
			if(temp[i]==temp[i+1]){
				p = false;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else if(!p) cout << "NO\n";
		else{
			bool test = true;
			for(int i=0;i<n-1;i++){
				if(str[i]==str[i+1]){
					if(str[i]!=temp[0] && str[i+1]!=temp[m-1])
						test = true;
					else{
						test = false;
						break;
					}
				}
			}
			if(test) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}

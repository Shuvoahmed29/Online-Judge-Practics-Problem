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
		string str;	cin >> str;
		int b = 0;
		for(int i=0;i<n;i++){
			if(str[i]=='B') b++;
		}
		vector<int>ans,vec;
		if(b==k) cout << 0 << endl;
		else if (b<k){
			int cunt = 0;
			for(int i=0;i<n;i++){
				if(str[i] == 'A') cunt++;
				if(cunt == k-b){
					cout << 1 << endl;
					cout << i+1 << ' ' << "B\n";
					break;
				}
			}
		}
		else{
			int cunt = 0;
			for(int i=0;i<n;i++){
				if(str[i] == 'B') cunt++;
				if(cunt == b-k){
					cout << 1 << endl;
					cout << i+1 << ' ' << "A\n";
					break;
				}
			}
		}
	}
}

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
		int cunt=2,p=0;
		for(int i=1;i<=n;i++){
			cunt++;
			if(i%3==0) {
				cunt++;
				p++;
				if(p%2==0) cunt++;
			}
			cout << cunt << " ";
		}
		cout << endl;
	}
}

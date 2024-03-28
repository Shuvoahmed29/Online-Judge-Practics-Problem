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
		vector<int>vec(n);
		int first = -1,last=0;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(vec[i]==1 && first==-1){
				first = i;
			}
			if(vec[i]==1) last = i;
		}
		int cunt = 0;
		for(int i=first;i<last;i++){
			if(vec[i]==0) cunt++;
		}
		cout << cunt << endl;
	}
}
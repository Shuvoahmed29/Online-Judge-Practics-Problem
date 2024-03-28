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
		vector<int>vec(n+10);
		for(int i=0;i<n;i++){
			int p;	cin >> p;
			vec[p]=i;
		}
		// for(auto it:vec){
		// 	cout << it << " ";
		// }
		// cout << endl;
		int cunt=0;
		for(int i=0;i<n;i++){
			if(vec[i]>vec[i+1]) cunt++;
		}
		cout << cunt << endl;
	}
}

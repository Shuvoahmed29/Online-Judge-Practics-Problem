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
		vector<int>vec(3);
		for(int i=0;i<3;i++) cin >> vec[i];
		sort(vec.begin(),vec.end());
		if(vec[1]+vec[2]>=10) cout << "YES\n";
		else cout << "NO\n";
	}
}

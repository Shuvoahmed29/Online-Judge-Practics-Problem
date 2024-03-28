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
		int zero = 0,negative = 0;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin >> vec[i];
			if(vec[i] == 0) zero++;
			else if(vec[i] < 0) negative++;
		}
		if(zero > 0 || negative%2 != 0) cout << 0 << endl;
		else{
			cout << 1 << endl;
			cout << 1 << ' ' << 0 << endl;
		}
	}
}

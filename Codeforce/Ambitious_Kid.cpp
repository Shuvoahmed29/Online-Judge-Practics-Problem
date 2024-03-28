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
	int n,x;	cin >> n;
	int mini = INT_MAX;
	for(int i=0;i<n;i++){
		cin >> x;
		mini = min(mini,abs(x));
	}
	cout << mini << endl;
}

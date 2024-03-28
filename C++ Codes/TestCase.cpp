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
	int n;	cin >> n;
	for(int i=0;i<n;i++){
		cout << rand()%1000000 <<endl;
	}
}
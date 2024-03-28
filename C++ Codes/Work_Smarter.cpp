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
		double l,v1,v2;	cin >> l >> v1 >> v2;
		int tor = (l/v1);
		double tor1 = (double)(l/v1);
		if(tor1>tor) tor++;
		int hare = (l/v2);

		double hare1 = (double)(l/v2);
		// cout << hare1 << endl;

		if(hare1>hare) hare++;

		cout << tor-hare-1 << endl;
	}
}

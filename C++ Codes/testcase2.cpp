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
	int n; cin >> n;
	int cunt = 0;
	for(int i=1000;i<=n;i++){
		if(i%4==0 && i%100!=0) {
			cout << i << endl;
			cout << rand()%1000000000 << ' ' << rand()%56 << endl;
			cunt++;
		}
		else if(i%4==0 && i%100==0 && i%400==0){
			cout << i << endl;
			cout << rand()%1000000000 << ' ' << rand()%12 << endl;
			cunt++;
		}
	}
	cout << cunt << endl;
}
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
		int n,a,x=0;	cin >> n;
		for(int i=0;i<n;i++){
			cin >> a;
			x = (x^a);
		}
		cout << a << endl;
	}
}

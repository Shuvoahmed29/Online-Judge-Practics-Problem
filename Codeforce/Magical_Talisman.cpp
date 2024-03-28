#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void printBinary(int n){
	for(int i=31;i>=0;i--){
		cout << ((n>>i)&1);
	}
	cout << endl;
}
int main(){
	code();
	int tt;	cin >> tt;
	// printBinary(1280);
	while(tt--){
		int n;	cin >> n;
		int even=0,odd=0,mini=INT_MAX,min_even=INT_MAX;
		for(int i=0;i<n;i++){
			int x; cin >> x;
			mini = min(mini,x);
			if( (x & (1<<0))) odd++;
			else{
				even++;
				int cunt=0;
				for(int i=0;i<=31;i++){
					if((x &(1<<i))==0) cunt++;
					else break;
				}
				min_even = min(min_even,cunt);
				// cout << min_even << endl;
			}
		}
		if(odd!=0){
			cout << even << endl;
		}
		else{
			cout << min_even + even-1 << endl;
		}
	}
}

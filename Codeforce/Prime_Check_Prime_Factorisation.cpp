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
	int n;	cin >> n;
	//Prime Check
	bool is_prime = true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			is_prime = false;
			break;
		}
	}
	if(is_prime) cout << "Prime\n";
	else cout << "NOT Prime\n";

	//Prime Factorisation
	vector<int>vec;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			vec.push_back(i);
			n=n/i;
		}
	}
	if(n>1) vec.push_back(n);
	for(auto it:vec) cout << it << " ";
}

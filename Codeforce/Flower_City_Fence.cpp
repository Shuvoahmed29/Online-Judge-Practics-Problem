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
		vector<int>vec(n);
		int mx = INT_MIN;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			mx = max(mx,vec[i]);
		}
		if(mx>n){
			cout << "NO\n";
			continue;
		}
		vector<int>cunt(n+1,0);
		cunt[0] = n;
		for(int i=0;i<n;i++)	cunt[vec[i]]--;
		int sum=0;
		for(int i=0;i<n;i++){
			sum += cunt[i];
			cunt[i] = sum;
		}
		cunt.erase(cunt.begin()+n);
		if(vec==cunt) cout << "YES\n";
		else cout << "NO\n";
	}
}

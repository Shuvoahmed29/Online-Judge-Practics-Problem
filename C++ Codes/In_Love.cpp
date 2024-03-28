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
	set<int>left,right;
	map<int,int>fast,last;
	while(tt--){
		char ch;	cin >> ch;
		int l,r;	cin >> l >> r;
		if(ch=='+'){
			left.insert(l);
			right.insert(r);
			fast[l]++;
			last[r]++;
		}
		else{
			fast[l]--;
			last[r]--;
			if(!fast[l]) 	left.erase(l);
			if(!last[r])	right.erase(r);
		}
		if(!left.empty() && (*--left.end()>*right.begin()) ){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}

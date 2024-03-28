#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e6;
int primeFactor(int n){
	int cunt=0;
	for(int i=2;i*i<=N;i++){
		while(n%i==0){
			cunt++;
			n/=i;
		}
	}
	if(n>1) cunt++;
	return cunt;
}
int main(){
	code();
	int n=-1;
	map<pair<int,int>,int>mp;
	while(n!=0){
		cin >> n;
		if(n==0) break;
		int p = primeFactor(n);
		mp.insert(pair<pair<int, int>,int>(make_pair(p,n),p) );
	}
	int test=1;
	for(auto it:mp) {
		cout <<"Case "<<test++<<": "<< it.first.second << endl;
		//cout << it.first.first<< " " <<it.first.second<<" " <<it.second <<endl;
	}
}
/*
1 0
2 1
3 1
4 2
*/
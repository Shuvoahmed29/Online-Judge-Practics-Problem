#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int PrimeFactor(int n){
	set<int>st;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			st.insert(i);
			n/=i;
		}
	}
	if(n>1) st.insert(n);
	return st.size();
}
int main(){
	code();
	int n;	cin >> n;
	int cunt=0;
	for(int i=1;i<=n;i++){
		if(PrimeFactor(i)==2) cunt++;
	}
	cout << cunt << endl;
}

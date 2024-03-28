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
	int n,m,x,y;	cin >> n >> m >> x >> y;
	set<pair<int,int>>st;
	int x1=x,y1=y;
	st.insert({x,y});
	cout << x << " " << y << endl;
	int p=0,k=0;
	for(int i=x1;i<=n;i++){
		// y1=m;
		p=st.size();
		st.insert({i,y1});
		if(st.size()>p) cout << i << " " << y1 << endl;
		y1=y;
		while(y1>0){
			p=st.size();
			st.insert({i,y1});
			if(st.size()>p){
				cout << i << " " << y1 << endl;
				k=y1;
			}
			y1--;
		}
		y1=1;
		while(y1<=m){
			p = st.size();
			st.insert({i,y1});
			if(st.size()>p){
				cout << i << " " << y1 << endl;
				k=y1;
			}
			y1++;
		}
		y1=k;
	}
	y1=k;
	for(int i=1;i<x1;i++){
		p=st.size();
		st.insert({i,y1});
		if(st.size()>p) cout << i << " " << y1 << endl;
		y1=y;
		while(y1>0){
			p = st.size();
			st.insert({i,y1});
			if(st.size()>p) {
				cout << i << " " << y1 << endl;
				k=y1;
			}
			y1--;
		}
		y1=1;
		while(y1<=m){
			p = st.size();
			st.insert({i,y1});
			if(st.size()>p) {
				cout << i << " " << y1 << endl;
				k=y1;
			}
			y1++;
		}
		y1=k;
	}
	// for(auto it:st){
	// 	cout << it.first << " "<<it.second<<endl;
	// }
}

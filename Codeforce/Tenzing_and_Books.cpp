#include<bits/stdc++.h>
using namespace std;
#define int long long
stack<int> Reverse(stack<int>st){
	stack<int> temp;
	while(!st.empty()){
		temp.push(st.top());
		st.pop();
	}
	return temp;
}
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		int n,x,p;	cin >> n >> x;
		stack<int>st1,st2,st3;
		for(int i=0;i<n;i++){
			cin >> p;
			st1.push(p);
		}
		st1=Reverse(st1);
		for(int i=0;i<n;i++){
			cin >> p;
			st2.push(p);
		}
		st2=Reverse(st2);
		for(int i=0;i<n;i++){
			cin >> p;
			st3.push(p);
		}
		st3=Reverse(st3);
		int ans = 0;
		while(!st1.empty()){
			p = st1.top();
			if((x&p) + (x^p) == x){
				ans = (ans|p);
				st1.pop();
			}
			else break;
		}
		while(!st2.empty()){
			p = st2.top();
			if((x&p) + (x^p) == x){
				ans = (ans|p);
				st2.pop();
			}
			else break;
		}
		while(!st3.empty()){
			p = st3.top();
			if((x&p) + (x^p) == x){
				ans = (ans|p);
				st3.pop();
			}
			else break;
		}
		if(ans == x) cout << "YES\n";
		else cout << "NO\n";
	}
}
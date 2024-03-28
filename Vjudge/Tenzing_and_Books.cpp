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
		int ans = 0,cunt=0;
		while(!st1.empty() or !st2.empty() or !st3.empty()){
			int s1 = st1.top(),s2 = st2.top(),s3 = st3.top();
			if(x &&)
		}
		if(ans == x) cout << "YES\n";
		else cout << "NO\n";
	}
}
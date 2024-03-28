#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		string str;	cin >> str;
		bool ok = true;
		int len=str.size();
		stack<int>st1,st2,st3;
		for(int i=0;i<len;i++){
			if(str[i]=='(') st1.push(i);
			else if(str[i] == ')' && st1.size()!=0){
				int p = st1.top();
				st1.pop();
				if(p%2 == i%2){
					ok=false;
					break;
				}
			}

			else if(str[i]=='{') st2.push(i);
			else if(str[i] == '}'&& st2.size()!=0){
				int p = st2.top();
				st2.pop();
				if(p%2 == i%2){
					ok=false;
					break;
				}
			}

			else if(str[i]=='[') st3.push(i);
			else if(str[i] == ']' && st3.size()!=0){
				int p = st3.top();
				st3.pop();
				if(p%2 == i%2){
					ok=false;
					break;
				}
			}

			else if( (st1.size()==0 && str[i]==')') || (st2.size()==0 && str[i]=='}') || (st3.size()==0 && str[i]==']') ){
					ok = false;
					break;
			}
		}
		if(ok && len%2==0 && st1.size()==0 && st2.size()==0 && st3.size()==0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
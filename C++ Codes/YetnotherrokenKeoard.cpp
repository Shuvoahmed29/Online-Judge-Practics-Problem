#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main() {
	code();
   	int tt;	cin >> tt;
   	while(tt--){
   		stack<int>small,capital;
   		string str;	cin >> str;
   		for(int i=0;i<str.size();i++){
   			if(str[i]>='A' && str[i] <='Z' && str[i]!= 'B') capital.push(i);
   			if(str[i]>='a' && str[i] <='z' && str[i]!= 'b') small.push(i);
   			if(str[i]=='B' && !capital.empty()){
   				str[capital.top()] = '9';
   				capital.pop();
   			}
   			if(str[i]=='b' && !small.empty()){
   				str[small.top()] = '9';
   				small.pop();
   			}
   		}
   		for(int i=0;i<str.size();i++){
   			if(str[i]!='B' & str[i]!='b' & str[i]!='9')
   				cout << str[i];
   		}
   		cout << endl;
   	}
}
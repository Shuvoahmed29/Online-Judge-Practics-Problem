#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool isOperator(char ch){
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
		return true;
	}
	else return false;
}
int main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		string str;	cin >> str;
		stack<char>st;
		string post="";
		char Top;
		for(int i=0;i<str.size();i++){
			if(isOperator(str[i]) == false){
				if(!st.empty())	Top = st.top();
				if(Top == '^' || Top =='/'  || Top =='*'){
					if(str[i]=='+' || str[i]=='-'){
						post += Top;
						st.pop();
					}
				}
				st.push(str[i]);
				if(st.top()==')'){
					st.pop();
					while(1){
						Top = st.top();
						st.pop();
						if(Top == '(') break;
						if(Top != '(' || Top != ')') post +=Top;
					}
				}
			}
			else post +=str[i];
			
		}
		while(!st.empty()){
			post +=st.top();
			st.pop();
		}
		cout << post << endl;
	}
}

/*
 1. Tow operator of the same priority can not stay together in a stack;
 2. Highest Priority operator will not stay in the stack when lowest priority will be inserted.
 3. (--) in backet pop all the operators from the stack and place them in the postfix.
*/
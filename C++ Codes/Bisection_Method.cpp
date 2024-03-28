#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool isOperator(char ch){
	if(ch=='+' || ch=='-') return true;
	return false;
}
int main(){
	code();
	string str;	getline(cin,str);
	int a,b;	cin >> a >> b;
	char c;	cin >> c;
	queue<char>sk;
	cout << str << endl;
	for(int i=0;i<str.size();i++){
		if(isOperator(str[i])){
			sk.push(str[i]);
			str.erase(str.begin()+i);
			str.insert(str.begin()+i,' ');
		}
	}
	// for(int i=a;i<=b;i++){
	// 	stringstream ss(str);
	// 	string word;
	// 	while(ss>>word){
	// 		cout << word << endl;
	// 	}
	// }
	// while(!sk.empty()){
	// 	cout << sk.front() <<" ";
	// 	sk.pop();
	// }
	// cout << endl;
	// for(int i=a;i<=b;i++){

	// }
	cout << str << endl;
}

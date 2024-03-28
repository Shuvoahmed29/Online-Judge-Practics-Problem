#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;	cin >> str;
	vector<int>vec,B;
	int idx=0;
	for(int i=0;i<8;i++){
		if(str[i]=='R') vec.push_back(i);
		if(str[i]=='K') idx = i;
		if(str[i]=='B') B.push_back(i+1);
	}
	if((B[0]%2==0 && B[1]%2==0) || (B[0]%2!=0 && B[1]%2!=0)){
		cout << "No\n";
	}
	else if(idx>vec[0] && idx < vec[1]) cout << "Yes\n";
	else cout << "No\n";
}
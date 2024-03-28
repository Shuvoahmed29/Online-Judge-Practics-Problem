#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	string str;	cin >> str;
	int A=0,a=0;
	for(int i=0;i<str.size();i++){
		if(str[i]>='A' && str[i]<='Z') A++;
		else if(str[i]>='a' && str[i]<='z') a++;
	}
	cout << A << " " << a << endl;
}
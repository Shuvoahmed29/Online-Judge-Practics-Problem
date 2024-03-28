#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		string str;	cin >> str;
		int a = str[0]-'0';
		int b = str[1]-'0';
		int c = str[2]-'0';
		int d = str[3]-'0';
		if(a == 0) a=10;
		if(b == 0) b=10;
		if(c == 0) c=10;
		if(d == 0) d=10;
		int time = abs(1-a)+1;
		time += abs(a-b)+1;
		time += abs(b-c)+1;
		time += abs(c-d)+1;
		cout << time << endl;
	}
}

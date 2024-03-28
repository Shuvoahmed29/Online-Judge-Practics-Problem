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
	int tt;	cin >> tt;
	tt *= 3;
	while(tt--){
		string str;
		cin >> str;
		sort(str.begin(),str.end());
		if(str[0]=='?'){
			if(str[1]=='B' && str[2]=='C') cout << 'A' << endl;
			else if(str[1]=='A' && str[2]=='B') cout << 'C' << endl;
			else if(str[1]=='A' && str[2]=='C') cout << 'B' << endl;
		}
	}
}

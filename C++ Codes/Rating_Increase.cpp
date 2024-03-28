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
	while(tt--){
		string str;	cin >> str;
		string a,b;
		bool ok = false;
		a += str[0];
		for(int i=1;i<str.size();i++){
			if(str[i]!='0' || ok){
				b+=str[i];
				ok = true;
			}
			else a+=str[i];
		}
		if(b.size()==0) b+='0';
		int n = stoi(a),m=stoi(b);
		if(m>n && n!=0 && m!=0) cout << n << " " << m << endl;
		else cout << -1 << endl;
	}
}

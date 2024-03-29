#include<bits/stdc++.h>
using namespace std;
int main(){
	int tt;	cin >> tt;
	while(tt--){
		int hh;	cin >> hh;
		string str;	cin >> str;
		if(hh==0) cout << 12 << str << " AM\n";
		else if(hh<=11) {
			if(hh<10) cout << 0 << hh;
			else cout << hh;
			cout << str << " AM\n";
		}
		else if(hh==12) cout << hh << str  << " PM\n";
		else if(hh>12){
			if(hh-12<10) cout << 0 << hh-12;
			else cout << hh-12;
			cout << str << " PM\n";
		}
		else {
			if(hh<10) cout << 0 << hh;
			else cout << hh;
			cout << str << " AM\n";
		}
	}
}
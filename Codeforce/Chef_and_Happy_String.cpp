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
		int cunt =0,p=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				cunt++;
			}
			else{
				if(cunt>2){
					cout << "Happy\n";
					p=1;
					break;
				}
				else cunt=0;
			}
			if(cunt>2){
				cout << "Happy\n";
				p=1;
				break;
			}
		}
		if(p==0) cout << "Sad\n";
	}
}

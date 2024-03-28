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
		int n;	cin >> n;
		string str;	cin >> str;
		int match=0,not_match=0;
		for(int i=0;i<n/2;i++){
			if(str[i]==str[n-i-1]) match++;
			else not_match++;
		}
		for(int i=0;i<not_match;i++) cout<<0;
		for(int i=not_match;i<=n;i++){
			int p=i-not_match;
			if(p==0) cout << 1;
			else if(p==1 && n%2!=0) cout <<1;
			else if(p==1 && n%2==0) cout <<0;
			else{
				if(n%2==0){
					if(p/2 <=match && p%2==0) cout << 1;
					else cout <<0;
				}
				else{
					int r=p%2;
					p=p-r;
					if(p/2<=match) cout <<1;
					else cout <<0;
				}
			}
		}
		cout << endl;
	}
}

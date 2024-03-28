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
		int n,k;	cin >> n >> k;
		string str;	cin >> str;
		int cunt=0;
		for(int i=0;i<n;i++){
			if(str[i]=='B'){
				i = i+k-1;
				cunt++;
			}
		}
		cout << cunt << endl;
	}
}



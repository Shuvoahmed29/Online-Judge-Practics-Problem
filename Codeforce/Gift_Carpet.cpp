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
		int n,m;	cin >> n >> m;
		string str[n],s;
		for(int i=0;i<n;i++){
			cin >> str[i];
			s+=str[i];
		}
		int cunt=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				// cout << str[j][i] << endl;
				if(str[j][i]=='v' && cunt==0){
					cunt++;
					break;
				}
				else if(str[j][i]=='i' && cunt==1){
					cunt++;
					break;
				}
				else if(str[j][i]=='k' && cunt==2){
					cunt++;
					break;
				}
				else if(str[j][i]=='a' && cunt==3){
					cunt++;
					break;
				}
				// cout << cunt << endl;
				if(cunt==4) break;
			}
			// cout << endl;
		}
		if(cunt==4) cout << "YES\n";
		else cout << "NO\n";
	}
}

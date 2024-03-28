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
		char ch;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin >> ch;
				if(ch!='.') cout << ch;
			}
		}
		cout << endl;
	}
}

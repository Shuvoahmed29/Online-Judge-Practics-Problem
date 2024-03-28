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
		int a,b,c,d;	cin >> a >> b >> c >> d;
		int cunt=0;
		if(a<b)cunt++;if(a<c)cunt++;if(a<d)cunt++;
		cout << cunt << endl;
	}
}

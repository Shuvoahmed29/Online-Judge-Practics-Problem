#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin >>t;
	while (t--){
		int n;
		cin >>n;
		int ans=0;
		int pw=1000*1000*1000;
		while(n>0){
			while(n<pw){
            pw=pw/10;
            }
			ans=ans+pw;
			n=n-(pw -(pw/10));
		}
		cout<<ans<<endl;
	}
	return 0;
}
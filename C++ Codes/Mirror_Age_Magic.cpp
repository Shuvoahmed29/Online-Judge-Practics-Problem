#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int leap_year(int year){
	for(int i=year+1;i<year+20;i++){
		if(i%4==0 && i%100!=0) return i;
		else if(i%4==0 && i%100==0 && i%400==0)
			return i;
	}
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int year;	cin >> year;
		int n,x;	cin >> n >> x;
		int next_year = leap_year(year);
		int age = 24+(next_year-year)-2*x;
		if(age>0) cout << age << endl;
		else cout << -1 << endl;
	}
}
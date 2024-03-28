#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int day,point,lesson,lab;
		cin >> day >> point >> lesson >> lab;
		int total_lab = (day+6)/7;
		int low = 1, high = day;
		int ans = 0;
		while(low<=high){
			int mid = (high+low)/2;
			int get = mid*lesson+ lab * min(2*mid,total_lab);
			if(point <= get) {
				ans = mid;
				high = mid-1;
			}
			else low = mid+1;
		}
		cout << day - ans << endl;
	}
}

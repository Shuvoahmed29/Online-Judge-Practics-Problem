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
	cout << tt;
	// while(tt--){
	// 	int day,point,lesson,lab;
	// 	cin >> day >> point >> lesson >> lab;
	// 	int total_lab = (day+6)/7;
	// 	int low = 1, high = day;
	// 	int ans = 0;
	// 	while(low<=high){
	// 		int mid = (low+high)/2;
	// 		int get = lesson*mid+lab*min(mid*2,total_lab);
	// 		if(get<=point) {
	// 			ans = mid;
	// 			high = mid-1;
	// 		}
	// 		else low = mid+1;
	// 	}
	// 	cout << day - ans << endl;
	// }
}

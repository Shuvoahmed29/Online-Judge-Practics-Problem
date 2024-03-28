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
		int per_day = lesson + 2*lab;
		int lab_day = total_lab/2;
		int baki = total_lab%2;
		int k = point/per_day;
		if(k==0) {
			cout << day - 1 << endl;
			continue;
		}
		if(k>lab_day) {
			k = lab_day;
		}
		int rem = point - (k*per_day);
		if(baki!=0){
			rem = rem - (baki*lab+lesson);
			k++;
		}
		
		if(rem<=0){
			cout << day-k << endl;
			continue;
		}
		k += rem/lesson;
		if(rem%lesson != 0) k++;
		cout << day-k << endl;
	}
}

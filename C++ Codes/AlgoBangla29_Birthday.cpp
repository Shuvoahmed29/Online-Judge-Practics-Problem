#include<bits/stdc++.h>
using namespace std;
#define int long long
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool isLeapyear(int n){
	if(n%4==0 && n%100!=0) return true;
	else if(n%4==0 && n%100==0 && n%400==0) return true;
	else return false;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int day,year;
		string month;
		cin >> day >> month >> year;
		if(month == "January" && day>31) cout << "Invalid Birthday" << endl;
		else if(month == "February" && isLeapyear(year) && day>29) cout << "Invalid Birthday" << endl;
		else if(month == "February" &&!isLeapyear(year) && day>28) cout << "Invalid Birthday" << endl;
		else if(month == "March" && day>31) cout << "Invalid Birthday" << endl;
		else if(month == "April" && day>30) cout << "Invalid Birthday" << endl;
		else if(month == "May" && day>31) cout << "Invalid Birthday" << endl;
		else if(month == "June" && day>30) cout << "Invalid Birthday" << endl;
		else if(month == "July" && day>31) cout << "Invalid Birthday" << endl;
		else if(month == "August" && day>31) cout << "Invalid Birthday" << endl;
		else if(month == "September" && day>30) cout << "Invalid Birthday" << endl;
		else if(month == "October" && day>31) cout << "Invalid Birthday" << endl;
		else if(month == "November" && day>30) cout << "Invalid Birthday" << endl;
		else if(month == "December" && day>31) cout << "Invalid Birthday" << endl;
		else {
			if(month=="February"){
				if(isLeapyear(year) && day == 29){
					for(int i=year+1;i<year+20;i++){
						if(isLeapyear(i)){
							cout << day << ' ' << month << ' ' << i << endl;
							break;
						}
					}
				}
				else cout << day << ' ' << month << ' ' << year+1 << endl;
			}
			else cout << day << ' ' << month << ' ' << year+1 << endl;
		}
	}
}
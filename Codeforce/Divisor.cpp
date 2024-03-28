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
	int n;	cin >> n;
	unordered_map<int,int>mp;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			mp[i]++;
			n/=i;
		}
	}
	if(n>1) mp[n]++;
	int total_divisor=1,sum=1;
	cout <<"Prime Factor\n";
	for(auto it:mp){
		cout << it.first << "^"<<it.second << endl;
		total_divisor *=(it.second+1);
		sum *=(pow(it.first,it.second+1)-1)/(it.first-1);
		//for large number use binary exponend
	}
	cout << "Total Divisors: " <<total_divisor<<endl;
	cout <<"All divisor Sum: " << sum << endl;
}

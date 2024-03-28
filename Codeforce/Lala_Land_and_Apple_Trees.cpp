#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int32_t main(){
	int tt;	cin >> tt;
	int n=tt;
	int idx,value;
	int N=0,P=0;
	while(tt--){
		cin >> idx >> value;
		if(idx<0) N++;
		else P++;
		mp[idx] = value;
	}
	int neg=-1,pos=1,k=0,k1=0;
	int sum1=mp[0],sum2=mp[0];
	for(int i=1;i<=n;i++){
		if(i%2==0){
			while(mp[neg]==0){
				neg--;
				k++;
				if(k>N) break;
			}
			sum1+=mp[neg];
			neg--;
			// cout <<"SUM1: " <<sum1 << endl;
		}
		if(i%2!=0) {
			while(mp[pos]==0){
				pos++;
				k1++;
				if(k1>P) break;
			}
			sum1+=mp[pos];
			pos++;
			// cout <<"SUM1: " <<sum1 << endl;
		}
	}
	// cout <<"SUM1: " <<sum1 << endl;
	neg=-1,pos=1,k=0,k1=0;
	for(int i=0;i<=n;i++){
		if(i%2==0){
			while(mp[neg]==0){
				neg--;
                k++;
				if(k>N) break;
			}
			sum2+=mp[neg];
			neg--;
		}
		if(i%2!=0) {
			while(mp[pos]==0){
				pos++;
                k1++;
				if(k1>P) break;
			}
			sum2+=mp[pos];
			pos++;
		}
	}
	// cout <<"SUM2: " <<sum2 << endl;
	cout << max(sum1,sum2) << endl;
}
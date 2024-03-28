#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n);
		int operation = 0,sum = 0;
		int pos=0,neg=0,idx1,idx2;
		for(int i=0;i<n;i++){
			cin >> vec[i];
			sum += abs(vec[i]);
			if(vec[i]<0){
				neg++;
			}
			if(vec[i]>0 && neg!=0){
				neg=0;
				operation++;
			}
		}
		if(neg!=0) operation++;
		cout << sum << " " << operation << endl;
	}
}
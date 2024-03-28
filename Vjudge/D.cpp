#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int tree,order,limit;	cin >> tree >> order >> limit;
	vector<pair<int,int>>vec;
	int cunt = 0,month=0,groth=0,first=0,zero=0;
	for(int i=0;i<tree;i++){
		int x,y;	cin >> x >> y;
		if(x>=limit)zero+=x;
		first+=x+y;
		groth+=y;
		vec.push_back(make_pair(x,y));
	}
	if(zero>=order) cout << 0 << endl;
	int l=1,r=1e9+9;
	int ans = 0;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(groth*mid+first>=order){
			ans = mid;
			r=mid-1;
		}
		else if(groth*mid+first<order){
			l=mid+1;
		}
	}
	cout << 2*ans+1 << endl;

}
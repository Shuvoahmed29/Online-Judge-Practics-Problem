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
	int n;	cin >> n;
	vector<int>vec(n);
	int total = 0;
	for(int i=0;i<n;i++){
		cin >> vec[i];
		total+=vec[i];
	}
	vector<int>sum(n);
	sum[0] = vec[0];
	int cost = vec[0];
	for(int i=1;i<n;i++){
		sum[i] =cost+vec[i];
		cost +=vec[i];
	}
	for(auto it:sum) cout << it << " ";
	cout << endl;
	int tt;	cin >> tt;
	int x,low,high,mid;
	while(tt--){
		cin >> x;
		low = 0,high=n-1;
		while(high-low>1){
			mid = low+(high-low)/2;
			if(sum[mid]>x){
				high = mid-1;
			}
			else{
				low = mid;
			}
		}
		cout << low <<" "<<high<< endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int n;	cin >> n;
	vector<int>vec(n);
	for(int i=0;i<n;i++)
		cin >> vec[i];
	int x;	cin >> x;
	int l=0,r=n-1,upper=-1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(vec[mid]<=x){
			l = mid+1;
		}
		else if(vec[mid]>x){
			upper = mid;
			r = mid-1;
		}
	}
	cout << upper << endl;
}
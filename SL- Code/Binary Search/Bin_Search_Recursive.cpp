#include<bits/stdc++.h>
using namespace std;
int Bin_Search(vector<int>vec,int l,int r,int x){
	if(l<=r){
		int mid = l + (r-l)/2;
		if(vec[mid] == x){
			return mid+1;
		}
		if(vec[mid]>x){
			return Bin_Search(vec,l,mid-1,x);
		}
		else{
			return Bin_Search(vec,mid+1,r,x);
		}
	}
	return -1;
}
int32_t main(){
	int n;	cin >> n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	int x;	cin >> x;
	int idx = Bin_Search(vec,0,n-1,x);
	cout << idx << endl;
}
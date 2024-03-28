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
	int arr[n],sum=0,mx=INT_MIN;
	vector<int>subarray;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum+=arr[i];
        mx = max(mx,sum);
        if(sum<0) sum=0;
	}
	cout << mx << endl;
}
/*
5
5 4 -1 7 8

9
-2 1 -3 4 -1 2 1 -5 4
6
problem: https://leetcode.com/problems/maximum-subarray/
*/
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
	for(int i=1;i<=tt;i++){
		int n;	cin >> n;
		int sum = n*(n-1)/2;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		int p=0;
		while(p<n){
			int pre = vec[p];
			int k=1;
			while(p<n-1 && pre == vec[p+1]){
				p++;
				k++;
			}
			sum = sum - (k*(k-1)/2);
			p++;
		}
		cout<<"Case "<<i<<": "<<sum<<"\n";
	}
}

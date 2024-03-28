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
	int tt;	cin >> tt;
	while(tt--){
		int n,x;	cin >> n >> x;
		vector<int> vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		int mx = INT_MIN;
		for(int i=1;i<n;i++){
			int diff = vec[i]-vec[i-1];
			mx = max(mx,diff);
		}
		mx = max(mx,vec[0]-0);
		mx = max(mx,2*(x-vec[n-1]));
		cout << mx << endl;
	}
}

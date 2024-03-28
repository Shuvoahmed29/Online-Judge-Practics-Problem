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
	while(tt--){
		int n,m;	cin >> n >> m;
		vector<int>vec(n);
		for(int i=0;i<n;i++)	cin >> vec[i];
		sort(vec.begin(),vec.end());
		vector<int> vec2(m);
		for(int i=0;i<m;i++)	cin >> vec2[i];
		sort(vec2.begin(),vec2.end());
		reverse(vec2.begin(),vec2.end());
		int r=m-1,l=0,i=0,j=n-1;
		int ans = 0;
		while(i<=j){
    		int left=abs(vec[i]-vec2[l]);
    		int right=abs(vec[j]-vec2[r]);
    		int mx=max(left,right);
    		ans+=mx;
    		if(left == mx){
        		i++;
        		l++;
    		}
    		else if(right == mx){
        		j--;
        		r--;
    		} 
		}
		cout<< ans <<endl;
	}
}
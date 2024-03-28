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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tt;	cin >> tt;
	int i,n,k,x,w,p;
	while(tt--){
		cin >> n >> k;
		vector<int>vec(n),v;
		for(i=0;i<n;i++) cin >> vec[i];
		v = vec;
		sort(v.begin(),v.end());
		for(i=0;i<=n;i++){
			if(v[i]!=i){
				x=i;
				break;
			}
		}
		// vec.push_back(x);
		w = k%(n+1);
		for(int i=0; i<w-1; ++i){
			cout<<vec[n-w+i+1]<<" ";
		}
		if(w<=n && w!=0)cout<<x<<" ";
		for(int i = w; i<n; ++i){
			cout<<vec[i-w]<<" ";
		}
		// for(i=0;i<w;i++){
		// 	vec.insert(vec.begin(),vec[n]);
		// }
		// for(i=0;i<n;i++) cout << vec[i] <<" ";
		cout << '\n';
	}

}
/*
1 2 3 4 5 0-0,6,12,18 k%(n+1)==0
0 1 2 3 4 5-1,7,13,19 k%(n+1)==1
5 0 1 2 3 4-2,8,14,20 k%(n+1)==2
4 5 0 1 2 3-3,9,15,21 k%(n+1)==3
3 4 5 0 1 2-4,10,16,22 k%(n+1)==4
2 3 4 5 0 1-5,11,17,23 k%(n+1)==5
*/

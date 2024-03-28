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
	int tt;	cin >>  tt;
	while(tt--){
		int n,m,k;	cin >> n >> m >> k;
		vector<int>vec(n),Geli(m);
		for(int i=0;i<n;i++)	cin >> vec[i];
		for(int i=0;i<m;i++)	cin >> Geli[i];

		int ans=0;
		sort(vec.begin(),vec.end());
		sort(Geli.begin(),Geli.end());
		if(k%2==0){
        	if(vec[0]<Geli[m-1]){
            	swap(vec[0],Geli[m-1]);
            	sort(vec.begin(),vec.end());
				sort(Geli.begin(),Geli.end());
        	}
        	if(Geli[0]<vec[n-1]){
            	swap(vec[n-1],Geli[0]);
            	sort(vec.begin(),vec.end());
				sort(Geli.begin(),Geli.end());
        	}
    	}
    	else {
        	if(vec[0]<Geli[m-1]){
            	swap(vec[0],Geli[m-1]);
            	sort(vec.begin(),vec.end());
				sort(Geli.begin(),Geli.end());
        	}
    	}
    	for(auto it: vec) ans+=it;
    	cout<<ans<<endl;
	}
}

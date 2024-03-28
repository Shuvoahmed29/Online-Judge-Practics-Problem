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
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++) cin >> vec[i];
		vector<int>po,npo;
		for(int i=0;i<n+100;i++){
			po[i] = i;
			npo[i] = i;
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			int cunt = 0,lst = 0;
			int curr = vec[i];
			while(curr>0){
				if(curr%2==1) cunt++;
				lst++;
				cunt = cunt>>1;
			}
			if(cunt==1){
				ans+=po[(vec[i]-lst)];
				po[vec[i]-lst]++;
			}
			else{
				ans+=npo[vec[i]];
				npo[vec[i]]++;
			}
		}
		cout << ans << endl;
	}
}
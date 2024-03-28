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
		for(int i=0;i<n;i++)	cin >> vec[i];
		int ans = 0, p = 0;
		for(int i=1;i<n;i++){
			int cunt = 0;
			int temp = vec[i];
			while(temp < vec[i-1]){
				temp = temp*2;
				cunt++;
			}
			while(temp >= 2*vec[i-1] && p!=0){
				vec[i-1] = 2*vec[i-1];
				p--;
			}
			//cout << p << " "<<cunt << " "<<ans <<endl;
			p += cunt;
			ans += p;
			//cout << p << " "<<cunt << " "<<ans <<endl;
		}
		cout << ans << endl;
	}
}
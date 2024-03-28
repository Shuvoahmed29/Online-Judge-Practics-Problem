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
		for(int i=0;i<n;i++){
			int sum = 0;
			while(vec[i]>0){
				int digit = vec[i]%10;
				if(digit%2==0) sum+=digit;
				vec[i] = vec[i]/10;
			}
			cout << sum;
			if(i!=n-1)cout << " ";
		}
		cout << endl;
	}
}

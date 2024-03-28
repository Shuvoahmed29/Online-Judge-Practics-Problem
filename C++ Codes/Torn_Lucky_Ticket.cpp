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
	int n,i,j,k;	cin >> n;
	vector<string>vec(n);
	for(i=0;i<n;i++)	cin >> vec[i];
	int p = 0,q = 0,ans=n;
	string str;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			p = 0,q = 0;
			str = vec[i]+vec[j];
			int len = str.size();
			if(len%2==0 && i!=j){
				// cout << vec[i]<<" "<<vec[j] << endl;
				for(k=0;k<len/2;k++) p += str[k]-'0';
				for(k=len/2;k<str.size();k++) q += str[k]-'0';
				// cout << p << " "<<q<<endl;
				if(p==q) ans++;
			}
		}
	}
	cout << ans << endl;
}

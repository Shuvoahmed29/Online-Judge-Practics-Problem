 #include<bits/stdc++.h>
 using namespace std;
 #define int long long
 void code(){
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif 
 }
 int32_t main(){
 	code();
 	int tt;	cin >> tt;
 	while(tt--){
 		int a,b,r;	cin >> a >> b >> r;
 		if(a>b)	swap(a,b);
 		int ans = b-a;
 		int k = 0;
 		for(int i=63;i>=0;i--){
			if ((a ^ b) >> i & 1) {
    			if (k + (1LL << i) <= r) {
        			if ((a >> i & 1) == 0) {
            			if (1LL << (i + 1) <= ans) {
                			k += (1LL << i);
                			ans -= (1LL << (i + 1));
            			}
        			}
    			}
			}
 		}
 		cout << ans << endl;
 	}
 }
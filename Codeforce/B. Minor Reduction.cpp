#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())
#define gcd(arr, b) __gcd(arr, b)
#define lcm(arr, b) (arr * (b / gcd(arr, b)))
#define sq(x) (x) * (x)
#define For(i, n) for (ll i = 0; i < n; i++)
#define FOR(i,x,y) for(ll i=x;i<=y;i++)

#define vi vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define mp(arr,b) make_pair(arr,b)
#define vp vector<pair<ll,ll>>
#define Pin(x,y) pb(mp(x,y))
#define fst first
#define snd second

#define yes "YES\n"
#define no "NO\n"
#define tc ll t; cin>>t; while(t--){solve();}
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mtc int main(){fast;tc;}
#define min3(arr, b, c) min(arr, min(b, c))
#define min4(arr, b, c, d) min(arr, min(b, min(c, d)))
#define max3(arr, b, c) max(arr, max(b, c))
#define max4(arr, b, c, d) max(arr, max(b, max(c, d)))
#define mod 1000000007
#define pi 3.14159265358979323846
void solve();mtc
/*-----------------SHUVO AHMED--------------------------------*/
void solve(){
    string str;
	cin>>str;
	ll len=str.size();
	ll y=0,arr[len];
	for(ll i=1;i<=len;i++)arr[i]=str[i-1]-'0'; 
	for(ll i=1;i<len;i++)
		if(arr[i]+arr[i+1]>=10)y=i;
	if(y==0){
		cout<<arr[1]+arr[2];
	    for(ll i=3;i<=len;i++)cout<<arr[i];
        cout<<nl;
        return;
	} 
	for(ll i=1;i<y;i++)cout<<arr[i];
	cout<<arr[y]+arr[y+1];
	for(ll i=y+2;i<=len;i++)cout<<arr[i];
	cout<<nl;
}

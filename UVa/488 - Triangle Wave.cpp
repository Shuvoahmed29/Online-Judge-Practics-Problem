#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main() {
	ll t, f, a;
	cin>>t;
	while (t--) {
		cin>>a>>f;
		for (int i = 0; i < f; i++) {
			for (int j = 1; j <= a; j++) {
				for (int k = 0; k < j; k++)cout<<j;
				cout<<nl;
			}
			for (int j = a - 1; j >= 1; j--) {
				for (int k = 0; k < j; k++)cout<<j;
				cout<<nl;
			}
			if (i != f - 1)cout<<nl;
		}
		if(t)cout<<nl;
	}
}
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >>t;
	while (t--) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int L = n * (a - b);
        int R = n * (a + b);
		if (R < c - d || c + d < L)
		    cout << "No\n";
		else
		    cout << "Yes\n";
	}
    return 0;
}
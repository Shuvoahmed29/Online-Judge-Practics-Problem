#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int a,b,c;	cin >> a >> b >> c;
	if(a+b == c)
		cout << a << '+' << b << '=' << c << endl;
	else if(a-b == c)
		cout << a << '-' << b << '=' << c << endl;
	else if(a*b == c)
		cout << a << '*' << b << '=' << c << endl;
	else if(a/b == c)
		cout << a << '/' << b << '=' << c << endl;
	else if(a == b+c)
		cout << a << '=' << b << '+' << c << endl;
	else if(a == b-c)
		cout << a << '=' << b << '-' << c << endl;
	else if(a == b*c)
		cout << a << '=' << b << '*' << c << endl;
	else if(a == b/c)
		cout << a << '=' << b << '/' << c << endl;
}
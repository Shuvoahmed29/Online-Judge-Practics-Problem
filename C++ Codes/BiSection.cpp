#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x) 4*exp(-x)*sin(x)-1
int main(){
	code();
	float e;	cin >> e;
	float a,b;	cin >> a >> b;
	float f0,f1,f2,x;
	int cunt = 1;
	do{
		x=(a+b)/2;
		f2=f(x);
		if(f2>0) b = x;
		else a = x;
		cout << cunt << " x: " << x << " f(x): " << f2 << endl;
		cunt++;
	}while(abs(f2)>e);
	cout << "\nRoot is: " << x << endl;
}

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
	float posi,neg;	cin >> posi >> neg;
	float e; cin >> e;
	float x,f1;
	int cunt=0;
	do{
		x = (posi+neg)/2;
		f1 = f(x);
		if(f1>0) posi = x;
		else neg = x;
		cunt++;
		cout << cunt <<" x: "<<x << " f(x): " << f1 << endl;
	}while(abs(f1)>e);

	cout << "\nRoot is: " << x << endl;
}

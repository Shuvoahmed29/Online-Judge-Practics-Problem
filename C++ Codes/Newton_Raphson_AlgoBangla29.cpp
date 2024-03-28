#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x) x*exp(x)-1
#define df(x) x*exp(x)+exp(x)
int main(){
	code();
	float x0;	cin >> x0;
	float e;	cin >> e;
	float x,f,df,f1;
	int cunt=0;
	do{
		f = f(x0);
		df = df(x0);
		x = x0 - (f/df);
		x0 = x;
		f1 = f(x);
		cunt++;
		cout << cunt << " X: "<<x <<" f(x): "<<f1<<endl;

	}while(abs(f1)>e);

	cout << "\nRoot is: " << x << endl;
}

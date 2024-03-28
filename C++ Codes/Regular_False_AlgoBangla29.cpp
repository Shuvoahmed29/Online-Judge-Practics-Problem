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
	float negative,positive;	cin >> negative >> positive;
	float e;	cin >> e;
	float f0,f1,f2,c;
	int step=0;
	do{
		f0 = f(negative);
		f1 = f(positive);
		c = (negative*f1-positive*f0)/(f1-f0);
		f2 = f(c);
		if(f2>0) positive = c;
		else negative = c;
		step++;
		cout << step << " C: "<<c << " f(c): "<<f2 << endl;
	}while(abs(f2)>e);

	cout << "\nRoot is: "<< c << endl;
}

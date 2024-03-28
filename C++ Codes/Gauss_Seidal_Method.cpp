#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f1(x,y,z) (85-6*y+z)/27
#define f2(x,y,z) (72-6*x-2*z)/15
#define f3(x,y,z) (110-x-y)/54
int main(){
	code();
	float e;	cin >> e;
	float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3;
	int cunt=1;
	do{
		x1 = f1(x0,y0,z0);
		y1 = f2(x1,y0,z0);
		z1 = f3(x1,y1,z0);

		cunt++;
		cout << cunt <<"\t"<< x1 << "\t" << y1 << "\t" << z1 << endl;

		x0=x1;
		y0=y1;
		z0=z1;

		e1 = abs(x0-x1);
		e2 = abs(y0-y1);
		e3 = abs(z0-z1);
	}while(e1>e && e2>e && e3>e);

	cout << endl << "Solution  x: "<<x1 << "\t"<<"y: "<<y1 << "\t"<<"z: "<<z1<<endl;
}

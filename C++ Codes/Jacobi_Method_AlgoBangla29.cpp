#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f1(x,y,z) (12.6-2*y-2*z)/26
#define f2(x,y,z) (-14.3-3*x-z)/27
#define f3(x,y,z) (6-2*x-3*y)/17
int main(){
	code();
    float e;    cin >> e;
    float x,y,z,e1,e2,e3;
    float x0=0,y0=0,z0=0;
    int cunt=0;
    do{
        x = f1(x0,y0,z0);
        y = f2(x,y0,z0);
        z = f3(x0,y,z);
        cunt++;
        cout << cunt << " "<<x <<" "<<y << ' '<<z << endl;
        e1 = abs(x0-x);
        e2 = abs(y0-y);
        e3 = abs(z0-z);

        x0 = x;
        y0 = y;
        z0 = z;
    }while(e1>e && e2>e && e3>e);

    cout <<"\nRoot: "<<x << " "<<y<< " "<<z << endl;
}

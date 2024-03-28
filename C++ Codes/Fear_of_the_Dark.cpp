#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
double distance(int x1,int y1,int x2,int y2){
	double D = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return D;
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int p1,p2,a1,a2,b1,b2;
		cin >> p1 >> p2 >> a1 >> a2 >> b1 >> b2;
		double d1,d2,d3,d4,d5;
		d1 = distance(p1,p2,a1,a2);
		d2 = distance(p1,p2,b1,b2);
		d3 = distance(0,0,a1,a2);
		d4 = distance(0,0,b1,b2);
		d5 = distance(a1,a2,b1,b2);

		double x = min(d1,d2),y=min(d3,d4);
		double ans = max(x,y);
		if((min(d1,d2)==d1 && min(d3,d4)==d3) || (min(d1,d2)==d2 && min(d3,d4)==d4)){

		}
		else{
			if(2*ans<d5) ans = d5/2;
		}
		cout << setprecision(11) << ans << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--){
		ll x,y,sum=0;
		cin>>x>>y;
		if(x<y)
		    swap(x, y);
		ll a, b;
		cin >>a>>b;
		if(2*a<b){
			sum=sum+(a*(x+y));
			y=y-x;
		}
		else{
			sum=sum+(y*b);
			sum=sum+(x-y)*a;
		}
		cout<<sum<<endl;
	}
	return 0;
}
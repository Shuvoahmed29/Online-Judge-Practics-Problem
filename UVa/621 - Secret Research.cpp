#include <bits/stdc++.h>
using namespace std;
#include<stdio.h>
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    ll t;
	cin >> t;
	while (t--) {
		  string str;
		  cin >>str;
		  if (str == "1" || str == "4" || str== "78") {
		  	 cout << "+\n";
		 	  continue;
  	 	  }
  	 	  ll len = str.size() - 1;
  	 	  if (str[len - 1] == '3' && str[len] == '5') {
		  	 cout << "-\n";
 	  		 continue;
  	 	  }
  	 	  if (str[0] == '9' && str[len] == '4') {
		  	 cout << "*\n";
		  	 continue;
	   	  }
	   	  if (str[0] == '1' && str[1] == '9' && str[2] == '0') 
	   	  	 cout << "?\n";
 	}
}
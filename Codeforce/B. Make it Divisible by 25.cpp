#include <bits/stdc++.h>
using namespace std;
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
#define pb       push_back
#define mod 1000000007
#define fast     ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/

int main()
{
    fast;
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll minn=100000;
		for(int j=s.size()-1;j>=0;j--)
		{
			if(s[j]=='0')
			{
				for(int x=j-1;x>=0;x--)
				{
					if(s[x]=='0'||s[x]=='5') 
					{
						ll sb=j-x-1+s.size()-1-j;
						minn=min(sb,minn);
						break;
					}
				}
			}
			if(s[j]=='5')
			{
				for(int x=j-1;x>=0;x--)
				{
					if(s[x]=='2'||s[x]=='7') 
					{
						ll sb=j-x-1+s.size()-1-j;
						minn=min(sb,minn);
						break;
					}
				}
			}
		}
		cout<<minn<<endl;
	}
 }
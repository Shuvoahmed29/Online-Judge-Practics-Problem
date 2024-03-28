#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y,ans=1;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++){
        ans=ans*i;
    }
    cout<<ans<<"\n";
	return 0;
}

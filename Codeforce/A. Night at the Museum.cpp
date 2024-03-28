#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans=0;
	string str;
    cin>>str;
	char c=97;
	for(int i=0;i<str.size();i++)
	{
	    int a=abs(str[i]-c);
	    int b=26-abs(a);
	    ans=ans+min(a,b);
	    c=str[i];
	}
	cout<<ans<<endl;
    return 0;
} 
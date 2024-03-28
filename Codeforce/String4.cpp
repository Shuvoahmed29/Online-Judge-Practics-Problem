#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
	void solve(string str,int idx)
	{	
		if(idx>=str.size())
		{
			cout<<str<<endl;
			return ;
		}

		for(int i = idx;i<str.size();i++)
		{
			swap(str[idx],str[i]);
			solve(str,idx+1);
			swap(str[idx],str[i]);
		}


	}
int main(){
	code();
	string s;
	cin>>s;
	int n = 0 ;
	solve(s,n);
}

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int n;	cin >> n;
	vector<int>vec(n);
	for(int i=0;i<n;i++)	cin >> vec[i];
	int s;	cin >> s;
	int cunt=0;
	for(int mask=0;mask<=(1<<n)-1;mask++){
		int sum=0;
		for(int i=0;i<n;i++){
			if((mask>>i)&1){
				sum += vec[i];
			}
		}
		if(sum==s) cunt++;
	}
	cout << cunt << endl;
}

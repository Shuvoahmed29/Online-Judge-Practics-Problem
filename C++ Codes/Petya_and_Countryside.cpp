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
	int cunt = 0,mx=INT_MIN;
	for(int i=0;i<n;i++){
		cunt=0;
			for(int j=i;j>0;j--){
				if(vec[j]>=vec[j-1]) cunt++;
				else break;
			}
			for(int j=i;j<n-1;j++){
				if(vec[j]>=vec[j+1]) cunt++;
				else break;
			}
		 mx = max(mx,cunt+1);
	}
	cout << mx << endl;
}

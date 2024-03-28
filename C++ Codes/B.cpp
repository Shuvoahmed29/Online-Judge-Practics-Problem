#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
	code();
	ios_base::sync_with_stdio(0);
  	cin.tie(0);
  	int n=-1,sum,q=0;
  	while(n!=0){
  		cin >> n;
  		if(n==0) break;
  		q=0;
  		for(int i=1;i<=1000;i++){
  			for(int j=1;j<=1000;j++){
  				for(int k=1;k<=1000;k++){
  					sum = (7*i)+(11*j)+(13*k);
  					if(sum==n){
  						q=1;
  						cout << n <<" " <<i << " "<<j << " "<<k << " "<<(i+j+k)<<endl;
  						break;
  					}
  					else if(sum>=n){
  						cout << n << endl;
  						break;
  					}
  				}
  				if(q==1) break;
  			}
  		}
  	}
}

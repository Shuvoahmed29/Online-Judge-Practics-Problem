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
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    int x=0;
	    for(int i=0;i<n;i++) cin>>arr[i];
	   
	   int ans=0;
	   for(int i=0;i<32;i++){
	      int  count=0,count1=0;
	       for(int j=0;j<n;j++){
	           if(arr[j]&(1<<i)) count++;
	           else count1++;
	       }
	       ans = ans+(1<<i)*count*count1;
	   }
	 cout<<ans<<endl;  
	}
}
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
	for(int i=0;i<n;i++) cin >> vec[i];
	map<int,int>mp;
    for(int i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    int ans=0,p;
    for(auto it:mp){
        if(it.second>=2){
            p = (it.second*(it.second-1))/2;
            ans +=p;
        }
    }
    cout << ans << endl;
}

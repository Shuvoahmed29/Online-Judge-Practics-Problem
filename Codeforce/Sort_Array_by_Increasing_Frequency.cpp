#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool comp(vector<int>a,vector<int>b){
    if(a[0]<b[0]) return true;
    if(a[0]==b[0]) return a[1]>b[1];
    else return false;
}
int main(){
	code();
	int n;	cin >> n;
	int arr[n];
	unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
    	cin >> arr[i];
    	mp[arr[i]]++;
    }
    vector<vector<int>> vec;
    for(auto it:mp){
        vec.push_back({it.second,it.first});
    }
    sort(vec.begin(),vec.end(),comp);
    vector<int>ans;
    for(auto it:vec){
        int p = it[0];
        while(p--){
            ans.push_back(it[1]);
        }
    }
    for(auto it:ans) cout << it << " ";
}

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};
int main(){
	code();
	int n;	cin >> n;
	int arr[n];
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		mp[arr[i]]++;
	}
	vector<pair<int, int> > vec(mp.begin(), mp.end());
	sort(vec.begin(), vec.end(),less_second<int,int>());
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
}

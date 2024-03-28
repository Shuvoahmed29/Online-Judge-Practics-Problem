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
	vector<int>::iterator lower, upper;
	for(int i=0;i<n;i++)	cin >> vec[i];
	int tt;	cin >> tt;
	while(tt--){
		int k;	cin >> k;
    	lower = lower_bound(vec.begin(), vec.end(), k);
    	if(binary_search(vec.begin(),vec.end(),k)) cout << "Yes ";
    	else cout << "No ";
		cout << (lower-vec.begin())+1 << endl;
	}
}

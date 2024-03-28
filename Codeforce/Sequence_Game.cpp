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
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		vector<int>vec(n),vec1;
		for(int i=0;i<n;i++)	cin >> vec[i];
		vec1.push_back(vec[0]);
		for(int i=1;i<n;i++){
			if(vec[i-1]>vec[i]){
				vec1.push_back(1);
				vec1.push_back(vec[i]);
			}
			else vec1.push_back(vec[i]);
		}
		cout << vec1.size() << endl;
		for(auto it:vec1){
			cout << it << " ";
		}
		cout << endl;
	}
}

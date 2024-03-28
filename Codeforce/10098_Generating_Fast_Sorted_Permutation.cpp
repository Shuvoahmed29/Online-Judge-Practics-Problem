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
		string str;	cin >> str;
		int idx=0;
		sort(str.begin(),str.end());
		vector<string>vec;
		do{
			vec.push_back(str);
		}while(next_permutation(str.begin(),str.end()));
		sort(vec.begin(),vec.end());
		for(auto it:vec){
			cout << it << endl;
		}
		cout << endl;
		vec.clear();
	}
}

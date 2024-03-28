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
		vector<int>vec(n-1);
		int sum = 0;
		for(int i=0;i<n-1;i++){
			cin >> vec[i];
			sum += vec[i];
		}
		cout << (-1)*sum << endl;
	}
}

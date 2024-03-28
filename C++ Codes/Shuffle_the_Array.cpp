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
	vector<int>vec(2*n);
	for(int i=0;i<2*n;i++) cin >> vec[i];
	int p=1;
	for(int i=0;i<n;i++){
		vec.insert(vec.begin()+i+p,vec[n+i+p-1]);
		p++;
	}
	for(int i=2*n;i<vec.size();){
		vec.erase(vec.begin()+i);
	}
	for(auto it:vec){
		cout << it << "  ";
	}
}

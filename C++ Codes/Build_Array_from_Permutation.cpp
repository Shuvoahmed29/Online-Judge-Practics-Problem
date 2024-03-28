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
	vector<int>vec(n+n);
	for(int i=0;i<n;i++)	cin >> vec[i];
	int p=n;
	for(int i=0;i<n;i++){
		vec[p++] = vec[vec[i]];
	}
	// p=n;
	// for(int i=0;i<n;i++){
	// 	vec[i]=vec[p];
    //     p++;
	// }
	for(int i=0;i<n;i++){
		vec.erase(vec.begin());
	}
	for(int i=0;i<vec.size();i++){
		cout << vec[i] << " ";
	}
}

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
void printBinary(int n){
	for(int i=32;i>=0;i--){
		cout << ((n>>i)&1);
	}
	cout << endl;
}
int main(){
	code();
	int tt;	cin >> tt;
	vector<int>masks(tt);
	for(int i=0;i<tt;i++){
		int n;	cin >> n;
		int a = 0;
		for(int i=0;i<n;i++){
			int x;	cin >> x;
			a = (a | (1<<x));
		}
		masks[i] = a;
	}
	int mx = INT_MIN;
	int p1=-1,p2=-1;
	for(int i=0;i<tt;i++){
		for(int j=i+1;j<tt;j++){
			int intersection = (masks[i]&masks[j]);
			int common = __builtin_popcount(intersection);
			if(common>mx){
				mx = max(mx,common);
				p1 = i;
				p2 = j;
			}
			
			// cout << i << " " << j << " " << common << endl;
		}
	}
	cout << p1 << " " << p2 << " " << mx << endl;
	// for(auto it:masks){
	// 	cout << it <<endl;
	// 	printBinary(it);
	// }
}
/*
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/
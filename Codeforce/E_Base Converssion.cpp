#include<bits/stdc++.h>
using namespace std;
void to_binary(int x){
	int r;
	int arr[10000], i = 0;
	while(x != 0){
		r = x % 2;
		x = x / 2;
		arr[i] = r;
		i++;
	}
	for(int j = i-1; j>=0; j--) cout << arr[j];
	cout << '\n';
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;	cin >> tt;
	int n;
	while(tt--){
		cin >> n;
		to_binary(n);
	}
}
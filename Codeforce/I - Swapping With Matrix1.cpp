#include<bits/stdc++.h>

using namespace std;
void solve(int n, int x, int y){
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	for(int j = 0; j < n; j++){
		swap(arr[x-1][j], arr[y-1][j]);
	}
	for(int i = 0; i < n; i++){
		swap(arr[i][x-1], arr[i][y-1]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}
int main(){
	int n, x, y;
	cin >> n >> x >> y;
	solve(n, x, y);
}
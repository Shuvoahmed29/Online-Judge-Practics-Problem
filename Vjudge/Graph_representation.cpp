#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int graph[N][N];

int32_t main(){
	int n,m;	cin >> n >> m;
	vector<int>graph[n+1];
	for(int i=0;i<m;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
		// graph[v1-1][v2-1] = 1;
		// graph[v2-1][v1-1] = 1;
	}
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout << graph[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	for(int i=1;i<=n;i++){
		cout << i << " = ";
		for(auto child:graph[i]){
			cout << child << " ";
		}
		cout << endl;
	}

}
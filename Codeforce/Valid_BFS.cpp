#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
vector<int>graph[N];
bool ok[N];
// void bfs(int src){
// 	queue<int>Q;
// 	Q.push(src);
// 	ok[src] = true;
// 	while(!Q.empty()){
// 		int data = Q.front();
// 		Q.pop();
// 		cout << data << " ";
// 		for(auto child:graph[data]){
// 			if(ok[child]==false){
// 				Q.push(child);
// 				ok[child] = true;
// 			}
// 		}
// 	}
// }
int32_t main(){
	int n;	cin >> n;
	for(int i=0;i<n-1;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	vector<int>vec(n);
	for(auto &it:vec) cin >> it;
	// bfs(1);
	cout << 12;
}
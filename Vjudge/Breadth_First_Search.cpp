#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
bool ok[N];
vector<int>graph[N+1];
void bfs(int root){
	queue<int> Q;
	Q.push(root);
	ok[root] = true;
	while(!Q.empty()){
		int data = Q.front();
		cout << data << " ";
		Q.pop();
		for(auto it:graph[data]){
			if(ok[it]==false){
				Q.push(it);
				ok[it] = true;
			}
		}
	}
}
int32_t main(){
	int n,m;	cin >> n >> m;
	for(int i=0;i<m;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	bfs(1);
}
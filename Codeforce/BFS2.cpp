#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e5+9;
bool visited[N];
vector<int>graph[N];
void BFS(int src){
	queue<int>Q;
	Q.push(src);
	visited[src] = true;
	while(!Q.empty()){
		int data = Q.front();
		Q.pop();
		cout << data << " ";
		for(auto it:graph[data]){
			if(visited[it]==false){
				Q.push(it);
				visited[it] = true;
			}
		}
	}
}
int main(){
	code();
	int n,m;	cin >> n >> m;
	for(int i=0;i<m;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	BFS(1);
}

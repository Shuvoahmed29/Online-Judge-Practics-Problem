#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e5;
vector<int> graph[N];
bool ok[N];
void DFS(int src){
	stack<int> Q;//FILO
	Q.push(src);
	while(!Q.empty()){
		int data = Q.top();
		Q.pop();
		ok[data] = true;
		cout << data << " ";
		for(auto child:graph[data]){
			if(ok[child]==false){
				Q.push(child);
			}
		}
	}
}
int main(){
	code();
	int vertex,edges;	cin >> vertex >> edges;
	for(int i=0;i<edges;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	DFS(1);
}

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int N=1e6+9;
vector<int>graph[N];
bool visited[N];
map<int,int>parent,total_child;
void bfs(int src){
	queue<int>Q;
	Q.push(src);
	visited[src] = true;
	while(!Q.empty()){
		int p = Q.front();
		Q.pop();
		for(auto child:graph[p]){
			if(visited[child]==false){
				Q.push(child);
				visited[child] = true;
				parent[child] = p;
				total_child[p]++;
			}
		}
	}
}
int32_t main(){
	code();
	int n;	cin >> n;
	for(int i=0;i<n-1;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	vector<int>vec(n);
	for(int i=0;i<n;i++)	cin >> vec[i];
	bfs(1);
	bool ok = true;
	queue<int>Q;
	Q.push(1);
	if(vec[0]!=1) cout << "NO\n";
	else{
		for(int i=1;i<n;i++){
			int top = Q.front();
			if(top == parent[vec[i]]){
				total_child[parent[vec[i]]]--;
				if(graph[vec[i]].size()>1) Q.push(vec[i]);
				if(total_child[parent[vec[i]]]==0) Q.pop();
			}
			else{
				ok = false;
				break;
			}
		}
		if(ok==false) cout << "NO\n";
		else cout << "YES\n";
	}
}

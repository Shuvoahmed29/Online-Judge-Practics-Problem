#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
vector<int>graph[N];
bool ok[N];
void dfs(int src){
	ok[src] = true;
	cout << src << " ";
	for(auto child:graph[src]){
		if(ok[child]== false) {
			cout << "Par: " << src << " child: " << child << endl;
			dfs(child);
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
	dfs(1);
}
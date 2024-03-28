#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N = 1e5+9;
vector<int> graph[N];
bool visited[N];
void DFS(int src){
	stack<int> st;
	st.push(src);
	visited[src] = true;
	while(!st.empty()){
		int data = st.top();
		st.pop();
		cout << data << " ";
		for(auto it:graph[data]){
			if(visited[it] == false){
				st.push(it);
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
	DFS(1);
}

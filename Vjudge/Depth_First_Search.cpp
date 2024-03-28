#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
bool ok[N];
vector<int>graph[N];
void dfs(int src){
	stack<int> st;
	st.push(src);
	while(!st.empty()){
		int data = st.top();
		cout << data << " ";
		st.pop();
		ok[data] = true;
		for(auto child:graph[data]){
			if(ok[child] == false){
				st.push(child);
				ok[child] = true;
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
	dfs(1);
}
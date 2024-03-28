#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
vector<int>graph[N];
bool ok1[N],ok[N];
vector<int> bfs(int src){
	queue<int> Q;
	vector<int>pa;
	Q.push(src);
	pa.push_back(0);
	ok[src] = true;
	while(!Q.empty()){
		int data = Q.front();
		Q.pop();
		ok[data] = true;
		for(auto child:graph[data]){
			if(ok[child]==false){
				Q.push(child);
				pa.push_back(data);
				ok[child] = true;
			}
			
		}
	}
	return pa;
}
int32_t main(){
	int n;	cin >> n;
	for(int i=0;i<n-1;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	vector<int>vec(n),vec2,vec1;
	map<int,int>parent;
	for(int i=0;i<n;i++)cin >> vec[i];
	// vector<int>PA;
	// for(int i=0;i<n;i++){
	// 	cout << parent[vec[i]] << " ";
	// 	PA.push_back(parent[vec[i]]);
	// }
	// cout << endl;
	// vec2 = bfs(1);
	// for(auto it:parent){
	// 	cout << it.first << " " << it.second << endl;
	// }
	// for(auto it:PA){
	// 	cout << it << " ";
	// }
	// cout << endl;
	if(vec == vec1) cout << "YES\n";
	else{
		parent[vec[0]] = 0;
		ok1[vec[0]] = true;
		for(int i=1;i<=n;i++){
			for(auto it:graph[i]){
				for(int j=1;j<n;j++){
					if(vec[j]==it && ok1[it] == false){
						parent[vec[j]] = i;
						ok1[it] = true;
					}
				}
			}
		}
		vector<int>PA;
		for(int i=0;i<n;i++)	PA.push_back(parent[vec[i]]);
		for(auto it:parent){
			cout << it.first << " " << it.second << endl;
		}
		cout << endl;
		vec2 = bfs(1);
		if(vec2 == PA) cout << "YES\n";
		else	cout << "NO\n";
	}
	
}
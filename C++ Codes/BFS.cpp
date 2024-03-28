#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>graph[N];
bool visited[N];
void bfs(int src){
    queue<int> Q;
    Q.push(src);
    visited[src] = true;
    while(!Q.empty()){
        int p = Q.front();
        Q.pop();
        visited[p] = true;
        cout << p << " ";
        for(auto child:graph[p]){
            if(visited[child] == false){
                Q.push(child);
                visited[child] = true;
            }
        }
    }
}
int main(){
    int n,m;    cin >> n >> m;
    for(int i=0;i<m;i++){
        int v1,v2;  cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bfs(1);
}

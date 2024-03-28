#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1e5+9;
vector<vector<int>>g[N];
int cost = 0;
vector<int> dist(N),parent(N);
bool vis[N];
const int INF = 1e9;
void primsMST(int src){
    for(int i=0;i<n;i++){
        dist[i] = INF;
    }
    set<pair<int,int>> s;
    dist[src] =  0;
    s.insert({0,src});

    while(!s.empty()){
        auto x = *s.begin();
        s.erase(x);
        int w = x.first;
        int u = x.second;
        vis[u] = true;
        int v = parent[u];
        cout << u << " " << v <<" "<< w << endl;
        cost += w;
        for(auto it:g[u]){
        	int v1 = it[0];
        	int v2 = it[1];
            if(vis[v1] == true) continue;
            if(dist[v1] > v2){
                s.erase({dist[v1],v1});
                dist[v1] = v2;
                s.insert({dist[v1],v1});
                parent[v1] = u;
            }
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int u,v,w;  cin >> u >> v >>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    primsMST(0);
    cout << cost << endl;
}
/*
4 5
0 1 10
1 2 15
0 2 5
3 1 2
3 2 40


0 0 0
2 0 5
1 0 10
3 1 2
17



6 9
0 4 4
4 3 9
0 3 1
0 1 2
3 2 5
2 1 3
3 1 3
1 5 7
2 5 8



0 0 0
3 0 1
1 0 2
2 1 3
4 0 4
5 1 7
17
*/

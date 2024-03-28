#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+10;
int parent[N],sz[N];
void make(int i){
    parent[i] = i;
    sz[i] = 1;
}
int find(int v){
    if(parent[v] == v) return parent[v];
    return parent[v] = find(parent[v]);
}
void Union(int v1,int v2){
    v1 = find(v1);
    v2 = find(v2);
    if(v1 != v2){
        if(sz[v1]<sz[v2])   swap(v1,v2);
        parent[v2] = v1;
        sz[v1]+=sz[v2];
    }
}
int32_t main(){
    int n; cin >> n;
    vector<pair<int,int>> cities(n+1);
    for(int i=1;i<=n;i++){
        cin >> cities[i].first >> cities[i].second;
    }
    vector<int> c(n+1) , k(n+1);
    for(int i=1;i<=n;i++) cin >> c[i];
    for(int i=1;i<=n;i++) cin >> k[i];

    vector<pair<int,pair<int,int>>> graph;
    for(int i=1;i<=n;i++){
        graph.push_back({c[i],{0,i}});
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int dist = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
            int cost = dist * (k[i]+k[j]);
            graph.push_back({cost,{i,j}});
        }
    }
    sort(graph.begin(),graph.end());

    for(int i=1;i<=n;i++) make(i);
    int total_cost = 0;
    vector<int> power;
    vector<pair<int,int>> connection;
    for(auto it:graph){
        int wt = it.first;
        int v1 = it.second.first;
        int v2 = it.second.second;
        if(find(v1) == find(v2)) continue;
        Union(v1,v2);
        total_cost += wt;
        if(v1==0 || v2==0){
            power.push_back(max(v1,v2));
        }
        else{
            connection.push_back({v1,v2});
        }
    }
    cout << total_cost << endl;
    cout<< power.size() << endl;
    for(auto it:power){
        cout << it << " ";
    }
    cout << endl;
    cout << connection.size() << endl;
    for(auto it:connection){
        cout << it.first << " " << it.second << endl;
    }
}

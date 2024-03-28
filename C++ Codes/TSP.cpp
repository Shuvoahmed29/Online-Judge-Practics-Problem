#include<bits/stdc++.h>
using namespace std;
int cost = 0,graph[4][4],visited[4];
int cunt=0;
int p=0;
vector<int>vec,v1;
void takeInput(){
    int i,j;
    cout <<"Given value!\n";
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++)
            cin >> graph[i][j];
    }
}
int find_next_node(int node){
    int nd,Min = INT_MAX,min_index,democost,i;
    for(i=1;i<=4;i++){
        if(visited[i]==0 && graph[node][i]!=0 && graph[node][i]<Min){
            democost = graph[node][i];
            Min = graph[node][i];
            min_index = i;
        }
    }
    nd = min_index;
    cost += democost;
    return nd;
}
void TSP(int node){
    int next_node;
    visited[node] = 1;
    cout <<"node: "<< node << " ";
    cout << "Cost: " << cost << endl;
    v1.push_back(cost);
    vec.push_back(node);
    //cunt++;
    //cout <<"cunt: "<< cunt << endl;
    next_node = find_next_node(node);
    /*if(next_node == INT_MAX){
        int v=1;
        cost += graph[next_node][v];
        cout << v;
        return;
    }*/
    if(vec.size()==4){
        cout <<"Node: "<< 1 << endl;
        p = graph[1][vec[vec.size()-1]];
        cout << "Cost: " << p << endl;
        return;
    }
    TSP(next_node);
    cout << "\nTotal Cost: " << v1[v1.size()-1]+p << endl;
}
int32_t main(){
    takeInput();
    int i;
    int start;
    for(i=1;i<=4;i++) visited[i] = 0;
    cout << "Enter start node: ";
    cin >> start;
    //cout << "TSP path: ";
    TSP(start);

}
/*
0 4 1 3
4 0 2 1
1 2 0 5
3 1 5 0
*/

// 21.Graph representation on memory(Adjacency List).cpp
#include <bits/stdc++.h>
using namespace std;
vector<int>graph[1000];
int main()
{
    int n,m;    cin >> n >> m;
    for(int i=0;i<m;i++){
        int v1,v2;  cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    cout << endl;
    for(int i=0;i<n;i++){
            cout << i << ": ";
        for(auto child:graph[i]){
            cout << child << " ";
        }
        cout << endl;
    }
}

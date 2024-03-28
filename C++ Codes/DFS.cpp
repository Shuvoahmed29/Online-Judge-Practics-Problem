#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> graph[N];
bool ok[N];
void dfs(int src){
    stack<int> st;
    st.push(src);
    ok[src] = true;
    while(!st.empty()){
        int data = st.top();
        st.pop();
        cout << data << " ";
        for(auto child:graph[data]){
            if(ok[child] == false){
                st.push(child);
                ok[child] = true;
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
    dfs(1);
}

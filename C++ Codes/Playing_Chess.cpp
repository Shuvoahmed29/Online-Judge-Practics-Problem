#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
const int N = 1e2+9;
bool visited[N][N];
int level[N][N];
const int INF = 1e9+9;
vector<pair<int,int>>moves={
	{2,1},{2,-1},
	{-2,1},{-2,-1},
	{1,2},{-1,2},
	{-1,-2},{1,-2}
};
bool isValid(int x,int y,int n){
	if(x>=1 && y>=1 && x<=n && y<=n){
		return true;
	}
	else return false;
}
int bfs(int srcX,int srcY,int distX,int distY,int n){
	queue<pair<int,int>> Q;
	Q.push({srcX,srcY});
	visited[srcX][srcY] = true;
	level[srcX][srcY] = 0;
	while(!Q.empty()){
		pair<int,int> pr = Q.front();
		Q.pop();
		int x = pr.first;
		int y = pr.second;
		for(auto it:moves){
			int childX = x + it.first;
			int childY = y + it.second;
			if(isValid(childX,childY,n)==false) continue;
			if(visited[childX][childY]==true) continue;
			Q.push({childX,childY});
			visited[childX][childY] = true;
			level[childX][childY] = level[x][y]+1;
		}
		if(level[distX][distY]!=INF) break;
	}
	return level[distX][distY];
}
void sets(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			visited[i][j] = false;
			level[i][j] = INF;
		}
	}
}
int32_t main(){
	code();
	int tt;	cin >> tt;
	int n,x,y,d1,d2;
	for(int i=1;i<=tt;i++){
		cin >> n >> x >> y >> d1 >> d2;
		sets(n);
		int ans = bfs(x,y,d1,d2,n);
		cout << "Case #"<< i <<": "<<ans << endl<<endl;
	}
}

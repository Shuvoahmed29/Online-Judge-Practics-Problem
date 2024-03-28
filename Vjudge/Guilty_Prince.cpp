#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+9;
char garph[N][N];
bool ok[N][N];
int cunt=0;
int n,m;
void dfs(int i,int j){
	ok[i][j] = true;
	cunt++;	

	if(i>=0 && j>=0 && i<m && j<n && garph[i][j]!='#' && ok[i][j]==false)dfs(i+1,j);
	if(i>=0 && j>=0 && i<m && j<n && garph[i][j]!='#' && ok[i][j]==false)dfs(i-1,j);
	if(i>=0 && j>=0 && i<m && j<n && garph[i][j]!='#' && ok[i][j]==false)dfs(i,j+1);
	if(i>=0 && j>=0 && i<m && j<n && garph[i][j]!='#' && ok[i][j]==false)dfs(i,j-1);

}
int32_t main(){
	int tt;	cin >> tt;
	while(tt--){
		cin >> n >> m;
		int idx1=0,idx2=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> garph[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(garph[i][j]=='@'){
					dfs(i,j);
					break;
				}
			}
		}
		cout << cunt << endl;
	}

}
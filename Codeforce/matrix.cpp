#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	int n,m;	cin >> n >> m;
	int matrix[n][m];
	vector<int>vec,vec1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        	cin >> matrix[i][j];
            if(matrix[i][j]==0){
            	vec1.push_back(i);
            	vec.push_back(j);
            }
        }
    }
    sort(vec.begin(),vec.end());
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<vec.size();k++){
                if(j==vec[k]){
                    matrix[i][j] = 0;
                }
            }
            for(int k=0;k<vec1.size();k++){
                if(i==vec1[k]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        	cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

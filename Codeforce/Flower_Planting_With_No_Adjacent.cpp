#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const int N=1e5;
vector<int>graph[N];
int main(){
	code();
	int n,m;	cin >> n >> m;
	for(int i=0;i<m;i++){
		int v1,v2;	cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	vector<int>vec(n);
     for(int i=1;i<=n;i++){
    	    vector<int>color(5,0);
    	    for(auto child:graph[i]){
    		    color[vec[child-1]] = 1;
    		    cout << "Vec: " << vec[child-1] << endl;
    	    }
    	    for(int j=1;j<=4;j++){
    		    if(color[j]==0){
    			    vec[i-1] = j;
    			    break;
    		    }
    	    }
    }
    for(int i=0;i<n;i++){
    	cout << vec[i] << " ";
    }
}

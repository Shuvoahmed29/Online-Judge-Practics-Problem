#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int const N = 1e5+9;
vector<int>divisor[N];
int main(){
	code();
	for(int i=2;i<=N;i++){
		for(int j=i;j<=N;j+=i){
			divisor[j].push_back(i);
		}
	}
	for(int i=1;i<=10;i++){
		for(auto it:divisor[i]){
			cout << it << " ";
		}
		cout << endl;
		cout << "Size: " << divisor[i].size() << endl;
	}
}

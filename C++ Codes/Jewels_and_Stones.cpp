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
	string jewels,stones;	cin >> jewels >> stones;
	int cunt=0;
	for(int i=0;i<jewels.size();i++){
		for(int j=0;j<stones.size();j++){
			if(jewels[i]==stones[j]) cunt++;
		}
	}
	cout << cunt << endl;
}

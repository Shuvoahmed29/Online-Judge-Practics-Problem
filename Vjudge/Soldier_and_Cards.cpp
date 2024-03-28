#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int n;	cin >> n;
	int k1;	cin >> k1;
	queue<int>st1;
	for(int i=0;i<k1;i++){
		int x;	cin >> x;
		st1.push(x);
	}
	int k2;	cin >> k2;
	queue<int>st2;
	for(int i=0;i<k2;i++){
		int x;	cin >> x;
		st2.push(x);
	}
	int cunt = 0;
	while(1){
		if(st1.size()==0 || st2.size()==0) break;
	 	int x = st1.front();
	 	st1.pop();
	 	int y = st2.front();
	 	st2.pop();
	 	if(x>y){
			st1.push(y);
			st1.push(x);
	 		cunt++;
	 	}
	 	else if(x<y){
			st2.push(x);
			st2.push(y);
	 		cunt++;
	 	}
		if(cunt>=n*n*n){
			cunt = -1;
			break;
		}
	 }
	 if(cunt!=0) cout << cunt << " ";
	 if(st1.size()!=0 && cunt!=-1) cout << 1 << endl;
	 else if(cunt!=-1) cout << 2 << endl;
}
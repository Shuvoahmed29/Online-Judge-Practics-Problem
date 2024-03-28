#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int main(){
	//code();
	string a,b;
	while(getline(cin,a),getline(cin,b)){
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int i=0,j=0;
		for(;;){
            if(i>=a.size() || j>=b.size()) break;
			if(a[i]==b[j]){
				cout << a[i];
				i++,j++;
			}
			else{
				if(a[i]>b[j]) j++;
				else i++;
			}
		}
		cout << endl;
	}
}

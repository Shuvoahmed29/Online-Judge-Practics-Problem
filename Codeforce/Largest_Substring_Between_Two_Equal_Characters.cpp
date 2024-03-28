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
	string str,s;	cin >> str;
	s=str;
	reverse(s.begin(),s.end());
	for(int i=0;i<str.size();i++){
		char ch = str[i];
		int idx = str.find(ch);
		str.erase(str.begin()+idx);
		int idx1 = s.find(ch);
		idx1 = s.size()-idx1-1;
		str.insert(str.begin()+idx,ch);
		if(idx==-1 || idx1==-1) continue;
		cout << ch << ' ' << idx << " " << idx1 << endl;
		cout << abs(idx-idx1)-1 << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main(){
	code();
	int tt;	cin >> tt;
	while(tt--){
		int n;	cin >> n;
		string str;	cin >> str;
		deque<int>dq;
		for(int i=0;i<n;i++) dq.push_back(str[i]-'0');
		int idx=0;
		vector<int>ans;
		while(!dq.empty() && ans.size()<=300){
			if(dq.front()==dq.back() && dq.front() == 1){
				ans.push_back(idx);
				dq.pop_back();
				dq.push_front(1);
			}
			else if(dq.front()==dq.back() && dq.front() == 0){
				ans.push_back(idx+dq.size());
				dq.pop_front();
				dq.push_back(0);
			}
			else{
				dq.pop_front();
				dq.pop_back();
			}
			idx++;
		}
		if(ans.size()>300)	cout << -1 << endl;
		else{
			cout << ans.size() << endl;
			for(auto it:ans) cout << it << " ";
			cout << endl;
		}
	}
}

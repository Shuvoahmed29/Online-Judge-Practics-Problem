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
		vector<bool>dead(n+2,false);
		vector<int>attack(n+2),defense(n+2);
		for(int i=1;i<=n;i++)	cin >> attack[i];
		for(int i=1;i<=n;i++)	cin >> defense[i];
		attack[n+1] = 0;
		vector<int>L(n+2),R(n+2);
		for(int i=1;i<=n;i++){
			L[i] = i-1;
			R[i] = i+1;
		}

		set<int>st;
		int cunt = 0;
		
		for(int i=1;i<=n;i++){
			if(attack[i-1]+attack[i+1]>defense[i]){
				if(L[i] > 0) st.insert(L[i]);
				if(R[i] < n+1) st.insert(R[i]);
				cunt++;
				L[R[i]] = L[i];
				R[L[i]] = R[i];
				dead[i] = true;
			}
		}
		cout << cunt << ' ';
		for(int i=2;i<=n;i++){
			set<int> k;
			cunt = 0;
			for(auto it:st){
				if(dead[it]==true) continue;
				if(attack[L[it]]+attack[R[it]]>defense[it])
					k.insert(it);
			}
			st.clear();
			for(auto it:k){
				if(L[it] > 0) st.insert(L[it]);
				if(R[it] < n+1) st.insert(R[it]);
				cunt++;
				L[R[it]] = L[it];
				R[L[it]] = R[it];
				dead[it] = true;
			}
			cout << cunt << ' ';
		}
		cout << endl;
	}
}

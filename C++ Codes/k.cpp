#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
int32_t main() {
    code();
    int tt;  cin >> tt;
    while(tt--){
        int n; cin >> n;
        int lower_bound = 0, upper_bound = 1e9;
        set<int> st;
        for (int i = 0; i < n; ++i) {
            int operation, value;
            cin >> operation >> value;

            if (operation == 1) lower_bound = max(lower_bound, value);
            else if (operation == 2) upper_bound = min(upper_bound, value);
            else  st.insert(value);
        }

        int answer = upper_bound - lower_bound+1;

        for (auto val : st) {
            if (lower_bound <= val && val <= upper_bound)  answer -= 1;
        }

        if(answer>0) cout << answer << endl;
        else cout << 0 << endl;
    }
}
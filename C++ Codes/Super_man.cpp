#include<bits/stdc++.h>
using namespace std;
#define int long long
int minCost(vector<int>& heights) {
    int n = heights.size();
    vector<int> dp(n, INT_MAX); // dp[i] stores the minimum cost to reach stone i
    dp[0] = 0; // Minimum cost to reach stone 1 is 0

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i - j >= 0) {
                dp[i] = min(dp[i], dp[i - j] + abs(heights[i] - heights[i - j]));
            }
        }
    }

    return dp[n - 1];
}

int32_t main() {
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; i++) cin >> heights[i];
        int minTotalCost = minCost(heights);
        cout << minTotalCost << endl;
    }
}

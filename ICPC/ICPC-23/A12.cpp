#include <bits/stdc++.h>
using namespace std;

#define int long long

bool canPartitionIntoThreeSets(vector<int>& nums) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0LL);

    if (totalSum % 3 != 0) {
        return false;
    }

    int targetSum = totalSum / 3;

    vector<vector<vector<bool>>> dp(n + 1, vector<vector<bool>>(targetSum + 1, vector<bool>(3, false)));

    for (int i = 0; i <= n; i++) {
        dp[i][0][0] = true;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            for (int k = 0; k < 3; k++) {
                dp[i][j][k] = dp[i - 1][j][k];

                if (j >= nums[i - 1]) {
                    dp[i][j][k] = dp[i][j][k] || dp[i - 1][j - nums[i - 1]][(k - 1 + 3) % 3];
                }
            }
        }
    }

    return dp[n][targetSum][2];
}

int32_t main() {
    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;
        vector<int> sequence(N);

        for (int i = 0; i < N; i++) {
            cin >> sequence[i];
        }
        cout << "Case " << caseNum << ":\n";

        for (int i = 0; i < N; i++) {
            vector<int> prefix(sequence.begin(), sequence.begin() + i + 1);
            if (canPartitionIntoThreeSets(prefix)) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        }
    }
    return 0;
}

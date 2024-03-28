#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define int long long
bool canPartition(vector<int>& nums, vector<int>& sums, int index, int targetSum) {
    if (index == nums.size()) {
        return sums[0] == targetSum && sums[1] == targetSum && sums[2] == targetSum;
    }

    for (int i = 0; i < 3; i++) {
        if (sums[i] + nums[index] <= targetSum) {
            sums[i] += nums[index];
            if (canPartition(nums, sums, index + 1, targetSum)) {
                return true;
            }
            sums[i] -= nums[index];
        }
    }

    return false;
}

bool canPartitionIntoThreeSets(vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    if (totalSum % 3 != 0) {
        return false;
    }

    int targetSum = totalSum / 3;
    vector<int> sums(3, 0);

    return canPartition(nums, sums, 0, targetSum);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    code();
    int T;
    scanf("%lld", &T);;
    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        scanf("%lld", &N);
        vector<int> sequence(N);

        for (int i = 0; i < N; i++) {
            scanf("%lld",&sequence[i]);
        }
        printf("Case %lld:\n",caseNum);

        for (int i = 0; i < N; i++) {
            vector<int> prefix(sequence.begin(), sequence.begin() + i + 1);
            if (canPartitionIntoThreeSets(prefix)) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        }
    }
    return 0;
}
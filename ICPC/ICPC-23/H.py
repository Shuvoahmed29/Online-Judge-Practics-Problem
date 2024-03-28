def can_partition_into_three_sets(prefix):
    total_sum = sum(prefix)
    if total_sum % 3 != 0:
        return False
    target_sum = total_sum // 3
    n = len(prefix)
    dp = [[[False] * (target_sum + 1) for _ in range(target_sum + 1)] for _ in range(n + 1)]
    dp[0][0][0] = True

    for i in range(1, n + 1):
        for j in range(target_sum + 1):
            for k in range(target_sum + 1):
                dp[i][j][k] = dp[i - 1][j][k]
                if j >= prefix[i - 1]:
                    dp[i][j][k] = dp[i][j][k] or dp[i - 1][j - prefix[i - 1]][k]
                if k >= prefix[i - 1]:
                    dp[i][j][k] = dp[i][j][k] or dp[i - 1][j][k - prefix[i - 1]]

    return dp[n][target_sum][target_sum]

def solve_test_case():
    N = int(input())
    sequence = list(map(int, input().split()))
    prefix_sum = 0
    for i, num in enumerate(sequence):
        prefix_sum += num
        if can_partition_into_three_sets(sequence[:i + 1]):
            print("1")
        else:
            print("0")

if __name__ == "__main__":
    T = int(input())
    for case in range(1, T + 1):
        print(f"Case {case}:")
        solve_test_case()

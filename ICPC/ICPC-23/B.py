def calculate_K(A, N):
    mod_A = [i % A for i in range(1, N + 1)]
    mod_A_minus_1 = [i % (A - 1) for i in range(1, N + 1)]

    total = sum(abs(mod_A[i] - mod_A_minus_1[i]) for i in range(N))
    return total


for i in range(int(input())):
    A, N = map(int, input().split())
    result = calculate_K(A, N)
    print("Case", i + 1, ":", result)

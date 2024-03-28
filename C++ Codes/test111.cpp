#include <iostream>
#include <vector>
#include <numeric>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> allocateFactors(int n, int m) {
    std::vector<int> factors(m, 0);

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            for (int j = 0; j < m; j++) {
                factors[j] *= i;
            }
            factors[0] += i;
            n /= i;
        }
    }

    return factors;
}

int main() {
    int n, m;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Enter the value of m: ";
    std::cin >> m;

    if (n < m) {
        std::cout << "Invalid input. n should be greater than or equal to m." << std::endl;
        return 1;
    }

    std::vector<int> factors = allocateFactors(n, m);

    std::cout << "Allocated Factors: ";
    for (int i = 0; i < m; i++) {
        std::cout << factors[i] << " ";
    }
    std::cout << std::endl;

    int maxGCD = std::accumulate(factors.begin(), factors.end(), factors[0], gcd);

    std::cout << "Maximum GCD: " << maxGCD << std::endl;

    return 0;
}

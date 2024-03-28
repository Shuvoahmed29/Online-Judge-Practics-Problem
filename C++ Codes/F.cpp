#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int closestPrime(int num) {
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int minOperations(std::vector<std::vector<int>>& grid, int rows, int cols) {
    int minOps = INT_MAX;

    // Check rows
    for (int i = 0; i < rows; ++i) {
        int ops = 0;
        for (int j = 0; j < cols; ++j) {
            int closest = closestPrime(grid[i][j]);
            ops += std::abs(grid[i][j] - closest);
        }
        minOps = std::min(minOps, ops);
    }

    // Check columns
    for (int j = 0; j < cols; ++j) {
        int ops = 0;
        for (int i = 0; i < rows; ++i) {
            int closest = closestPrime(grid[i][j]);
            ops += std::abs(grid[i][j] - closest);
        }
        minOps = std::min(minOps, ops);
    }

    return minOps;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> grid(n, std::vector<int>(m));

    // Input grid elements
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> grid[i][j];
        }
    }

    // Calculate and output the minimum number of moves
    std::cout << minOperations(grid, n, m) << std::endl;

    return 0;
}
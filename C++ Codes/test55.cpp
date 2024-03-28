#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool is_prime(int num) {
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

bool is_smart_number(int num) {
    int digit_sum = 0;
    std::string str_num = std::to_string(num);

    for (char digit : str_num) {
        digit_sum += digit - '0';
    }

    return is_prime(digit_sum) && is_prime(num);
}

int count_smart_numbers(int N) {
    int count = 0;
    for (int i = 2; i <= N; ++i) {
        if (is_smart_number(i)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int N;
    std::cout << "Enter the upper limit N: ";
    std::cin >> N;

    int result = count_smart_numbers(N);

    std::cout << result << std::endl;

    return 0;
}

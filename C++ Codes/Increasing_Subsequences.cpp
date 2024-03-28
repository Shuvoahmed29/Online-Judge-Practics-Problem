#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
	code();
    int n;
    std::cin >> n;

    std::array<int, 10000> output_answer;
    int intended_number;
    std::cin >> intended_number;
    intended_number--;

    int increasing_subsequence_number = 1;
    int index = 0;

    while (intended_number > -increasing_subsequence_number) {
        intended_number -= increasing_subsequence_number;
        increasing_subsequence_number *= 2;
        output_answer[index] = index;
        index++;
    }

    index = 10000;

    while (intended_number != 0) {
        if (intended_number >= (1 << index)) {
            output_answer[index] = index;
            intended_number -= 1 << index;
        }
        index--;
    }

    std::cout << index + 1 << std::endl; // Adjusted to include the last index
    for (int i = 0; i <= index; i++) {
        std::cout << output_answer[i];
    }
    std::cout << std::endl;

    return 0;
}
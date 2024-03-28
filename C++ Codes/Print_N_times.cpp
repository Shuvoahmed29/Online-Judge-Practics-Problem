#include <iostream>
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main() {
	code();
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cout << "Hello World!" << '\n';
    }

    return 0;
}
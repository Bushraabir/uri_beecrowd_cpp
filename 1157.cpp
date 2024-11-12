
#include <iostream>

int main() {
    int N;
    std::cin >> N;

    // find all divisors
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}

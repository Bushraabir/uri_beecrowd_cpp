#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    //  when N is 0
    if (N == 0) {
        return 0;
    }

    // Vector to store the Fibonacci sequence
    std::vector<int> fibonacci(N);
    fibonacci[0] = 0;
    if (N > 1) {
        fibonacci[1] = 1;
    }

    // Fibonacci sequence
    for (int i = 2; i < N; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Output
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            std::cout << " ";
        }
        std::cout << fibonacci[i];
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <vector>

int main() {
    //  Fibonacci numbers up to F(60)
    std::vector<unsigned long long> fibonacci(61);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i <= 60; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;
        std::cout << "Fib(" << N << ") = " << fibonacci[N] << std::endl;
    }

    return 0;
}

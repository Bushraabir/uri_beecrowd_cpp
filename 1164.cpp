
#include <iostream>

int main() {
    int N;
    std::cin >> N;

    while (N--) {
        int X;
        std::cin >> X;

        int sum = 0;
        // Calculate the sum of divisors excluding the number itself
        for (int i = 1; i <= X / 2; i++) {
            if (X % i == 0) {
                sum += i;
            }
        }

        // Check if the sum of divisors equals the number
        if (sum == X) {
            std::cout << X << " eh perfeito" << std::endl;
        } else {
            std::cout << X << " nao eh perfeito" << std::endl;
        }
    }

    return 0;
}

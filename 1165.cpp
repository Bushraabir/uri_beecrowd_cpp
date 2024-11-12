
#include <iostream>
#include <cmath>

bool isPrime(int X) {
    if (X <= 1) return false; // Numbers less than or equal to 1 are not prime
    if (X <= 3) return true;  // 2 and 3 are prime numbers
    if (X % 2 == 0 || X % 3 == 0) return false; // Eliminate even numbers and multiples of 3

    for (int i = 5; i <= std::sqrt(X); i += 6) {
        if (X % i == 0 || X % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;

    while (N--) {
        int X;
        std::cin >> X;

        if (isPrime(X)) {
            std::cout << X << " eh primo" << std::endl;
        } else {
            std::cout << X << " nao eh primo" << std::endl;
        }
    }

    return 0;
}

#include <iostream>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int x, y;

    while (std::cin >> x >> y) {
        // Calculate the factorials of x and y as long long
        long long factorial_x = factorial(x);
        long long factorial_y = factorial(y);

        // Output the sum of both factorials
        std::cout << factorial_x + factorial_y << std::endl;
    }

    return 0;
}

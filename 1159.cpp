
#include <iostream>

int main() {
    int X;

    while (std::cin >> X && X != 0) {
        // Ensure X starts from an even number
        if (X % 2 != 0) {
            X++;
        }

        // Calculate the sum of the next five even numbers
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += X;
            X += 2; // Move to the next even number
        }

        // Output the result
        std::cout << sum << std::endl;
    }

    return 0;
}

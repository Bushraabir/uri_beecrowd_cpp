
#include <iostream>

int main() {
    int N;
    std::cin >> N;

    while (N--) {
        int X, Y;
        std::cin >> X >> Y;

        // Ensure X starts from an odd number
        if (X % 2 == 0) {
            X++;
        }

        int sum = 0;
        for (int i = 0; i < Y; i++) {
            sum += X;
            X += 2; // Move to the next odd number
        }

        std::cout << sum << std::endl;
    }

    return 0;
}

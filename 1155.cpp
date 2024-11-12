#include <iostream>
#include <iomanip>

int main() {
    double S = 0.0;

    // loop to find  the sum
    for (int i = 1; i <= 100; i++) {
        S += 1.0 / i;
    }

    // Output
    std::cout << std::fixed << std::setprecision(2) << S << std::endl;

    return 0;
}

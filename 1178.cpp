
#include <iostream>
#include <iomanip>

int main() {
    double X;
    std::cin >> X;

    double N[100];
    N[0] = X;

    // Fill the array with each subsequent value being half of the previous
    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0;
    }

    // Print each element with four decimal places
    for (int i = 0; i < 100; i++) {
        std::cout << "N[" << i << "] = " << std::fixed << std::setprecision(4) << N[i] << std::endl;
    }

    return 0;
}

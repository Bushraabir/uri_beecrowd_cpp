#include <iostream>
#include <iomanip>

int main() {
    float A[100];

    // Read the array of 100 floating-point numbers
    for (int i = 0; i < 100; i++) {
        std::cin >> A[i];
    }

    // Print only the elements less than or equal to 10
    for (int i = 0; i < 100; i++) {
        if (A[i] <= 10.0) {
            std::cout << "A[" << i << "] = " << std::fixed << std::setprecision(1) << A[i] << std::endl;
        }
    }

    return 0;
}

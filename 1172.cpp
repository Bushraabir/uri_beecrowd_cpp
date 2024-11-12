#include <iostream>

int main() {
    int X[10];

    // Read the array of 10 integers
    for (int i = 0; i < 10; i++) {
        std::cin >> X[i];
    }

    // Replace null or negative values with 1 and print each element
    for (int i = 0; i < 10; i++) {
        if (X[i] <= 0) {
            X[i] = 1;
        }
        std::cout << "X[" << i << "] = " << X[i] << std::endl;
    }

    return 0;
}

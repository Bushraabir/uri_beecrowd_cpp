#include <iostream>

int main() {
    int V;
    std::cin >> V;

    int N[10];
    N[0] = V;

    // Fill the array
    for (int i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2;
    }

    // Print the array elements
    for (int i = 0; i < 10; i++) {
        std::cout << "N[" << i << "] = " << N[i] << std::endl;
    }

    return 0;
}

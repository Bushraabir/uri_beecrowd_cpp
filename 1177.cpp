
#include <iostream>

int main() {
    int T;
    std::cin >> T;

    int N[1000];

    // Fill the array using the repeating pattern
    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;
    }

    // Print the array elements
    for (int i = 0; i < 1000; i++) {
        std::cout << "N[" << i << "] = " << N[i] << std::endl;
    }

    return 0;
}

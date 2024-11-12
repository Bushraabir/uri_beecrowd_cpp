#include <iostream>

int main() {
    int N[20];

    // Read the array of 20 integers
    for (int i = 0; i < 20; i++) {
        std::cin >> N[i];
    }

    // Reverse the array by swapping elements
    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    // Print the modified array
    for (int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << N[i] << std::endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> X(N);

    // Read the array elements
    for (int i = 0; i < N; i++) {
        std::cin >> X[i];
    }

    // Initialize minimum value and its position
    int min_value = X[0];
    int min_position = 0;

    // Find the minimum value and its position
    for (int i = 1; i < N; i++) {
        if (X[i] < min_value) {
            min_value = X[i];
            min_position = i;
        }
    }

    // Output the results
    std::cout << "Menor valor: " << min_value << std::endl;
    std::cout << "Posicao: " << min_position << std::endl;

    return 0;
}

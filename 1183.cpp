#include <iostream>
#include <iomanip>

int main() {
    char operation;
    std::cin >> operation;

    double matrix[12][12];
    double sum = 0.0;
    int count = 0;

    // Reading the 12x12 matrix
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Summing elements above the main diagonal
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {  // Only elements where j > i
            sum += matrix[i][j];
            count++;
        }
    }

    // Output the result based on the operation
    if (operation == 'S') {
        std::cout << std::fixed << std::setprecision(1) << sum << std::endl;
    } else if (operation == 'M') {
        double average = sum / count;
        std::cout << std::fixed << std::setprecision(1) << average << std::endl;
    }

    return 0;
}

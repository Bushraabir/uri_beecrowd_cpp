#include <iostream>
#include <iomanip>

int main() {
    int column;
    char operation;
    std::cin >> column >> operation;

    double matrix[12][12];
    double sum = 0.0;

    // Read the 12x12 matrix
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Sum the elements in the specified column
    for (int i = 0; i < 12; i++) {
        sum += matrix[i][column];
    }

    // Output the result based on the operation
    if (operation == 'S') {
        std::cout << std::fixed << std::setprecision(1) << sum << std::endl;
    } else if (operation == 'M') {
        double average = sum / 12.0;
        std::cout << std::fixed << std::setprecision(1) << average << std::endl;
    }

    return 0;
}

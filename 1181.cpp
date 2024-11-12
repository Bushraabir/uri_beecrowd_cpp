
#include <iostream>
#include <iomanip>

int main() {
    int L;
    char T;
    double matrix[12][12];

    // Read the row number and operation
    std::cin >> L >> T;

    //  matrix
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Calculate the sum
    double result = 0.0;
    for (int j = 0; j < 12; ++j) {
        result += matrix[L][j];
    }

    // calculate the average
    if (T == 'M') {
        result /= 12.0;
    }

    // Output the result with one decimal place
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;

    return 0;
}

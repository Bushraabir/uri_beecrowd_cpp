#include <iostream>
#include <iomanip>

int main() {
    char operation;
    std::cin >> operation;

    double matrix[12][12];
    double sum = 0.0;


    // Read the 12x12 matrix
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> matrix[i][j];
        }
    }


    // - Elements below the main diagonal on the left side (i > j)
    // - Elements below the secondary diagonal on the right side (i + j > 11)
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){

            if(j < (11 - i) && j < i){
                 sum += matrix[i][j];
            }
            }
   }
    // Output the result based on the operation
    if (operation == 'S') {
        std::cout << std::fixed << std::setprecision(1) << sum << std::endl;
    } else if (operation == 'M') {
        double average = sum / 30;
        std::cout << std::fixed << std::setprecision(1) << average << std::endl;
    }

    return 0;
}

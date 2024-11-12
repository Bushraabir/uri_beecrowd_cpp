
#include <iostream>
#include <iomanip>

int main() {
    int par[5], impar[5];
    int parCount = 0, imparCount = 0;

    for (int i = 0; i < 15; i++) {
        int num;
        std::cin >> num;

        if (num % 2 == 0) {
            par[parCount++] = num;
            if (parCount == 5) {
                // Print and reset the par array
                for (int j = 0; j < 5; j++) {
                    std::cout << "par[" << j << "] = " << par[j] << std::endl;
                }
                parCount = 0;
            }
        } else {
            impar[imparCount++] = num;
            if (imparCount == 5) {
                // Print and reset the impar array
                for (int j = 0; j < 5; j++) {
                    std::cout << "impar[" << j << "] = " << impar[j] << std::endl;
                }
                imparCount = 0;
            }
        }
    }

    // Print remaining elements in the impar array
    for (int j = 0; j < imparCount; j++) {
        std::cout << "impar[" << j << "] = " << impar[j] << std::endl;
    }

    // Print remaining elements in the par array
    for (int j = 0; j < parCount; j++) {
        std::cout << "par[" << j << "] = " << par[j] << std::endl;
    }

    return 0;
}

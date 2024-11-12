#include <iostream>

int main() {
    int N;


    std::cin >> N;


    std::cout << N << std::endl;

    // Array of available banknotes
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};


    for (int i = 0; i < 7; ++i) {
        // Calculating the number of current banknotes needed
        int count = N / banknotes[i];

        // Printing the result in the required format
        std::cout << count << " nota(s) de R$ " << banknotes[i] << ",00" << std::endl;

        // Reducing N by the value of the used banknotes
        N %= banknotes[i];
    }

    return 0;
}

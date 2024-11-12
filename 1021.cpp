#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double N;


    std::cin >> N;

    // Converting the input to integer
    int totalCents = round(N * 100);

    // Array of banknote values
    int banknotes[] = {10000, 5000, 2000, 1000, 500, 200};
    // Array of coin values
    int coins[] = {100, 50, 25, 10, 5, 1};

    std::cout << "NOTAS:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        int count = totalCents / banknotes[i];
        std::cout << count << " nota(s) de R$ " << banknotes[i] / 100 << ".00" << std::endl;
        totalCents %= banknotes[i];
    }

    std::cout << "MOEDAS:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        int count = totalCents / coins[i];
        std::cout << count << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << coins[i] / 100.0 << std::endl;
        totalCents %= coins[i];
    }

    return 0;
}

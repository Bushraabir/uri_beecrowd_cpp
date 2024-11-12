#include <iostream>
#include <iomanip>
#include <unordered_map>

int main() {
    // Map of product codes to their prices
    std::unordered_map<int, double> priceList = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}
    };

    int numProducts;
    std::cin >> numProducts;

    double total = 0.0;
    // Loop through each  product
    for (int i = 0; i < numProducts; ++i) {
        int productCode, quantity;
        std::cin >> productCode >> quantity;

        // Calculate the cost
        total += priceList[productCode] * quantity;
    }


    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

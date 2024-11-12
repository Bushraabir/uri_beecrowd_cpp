#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

class Product {
public:
    int code;
    int units;
    float price;

    Product(int c, int u, float p) : code(c), units(u), price(p) {}//constructor

    float getTotalPrice() const {
        return units * price;
    }
};

int main() {
    // Read input for the first product
    int code1, units1;
    float price1;
    std::cin >> code1 >> units1 >> price1;
    Product product1(code1, units1, price1);

    // Read input for the second product
    int code2, units2;
    float price2;
    std::cin >> code2 >> units2 >> price2;
    Product product2(code2, units2, price2);

    // Calculate the total amount
    float total = product1.getTotalPrice() + product2.getTotalPrice();

    // Print the result formatted to two decimal places
    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}

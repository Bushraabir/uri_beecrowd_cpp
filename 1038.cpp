#include <iostream>
#include <iomanip>
using namespace std;

// Class representing the snack menu
class SnackMenu {
public:
    // Method to calculate the total price based on product code and quantity
    double getPrice(int code, int quantity) {
        double price = 0.0;  // Initialize price to 0

        // Determine the price per item based on the code
        switch (code) {
            case 1:
                price = 4.00 * quantity;
                break;
            case 2:
                price = 4.50 * quantity;
                break;
            case 3:
                price = 5.00 * quantity;
                break;
            case 4:
                price = 2.00 * quantity;
                break;
            case 5:
                price = 1.50 * quantity;
                break;
            default:
                cout << "Invalid code" << endl; // Handle invalid code input
        }

        return price; // Return the calculated total price
    }
};

int main() {
    int code, quantity;

    // Read the product code and quantity from user input
    cin >> code >> quantity;

    // Create an instance of SnackMenu
    SnackMenu menu;

    // Calculate the total price using the getPrice method
    double total = menu.getPrice(code, quantity);

    // Set output formatting to show 2 decimal places
    cout << fixed << setprecision(2)

    // Print the total price in the required format
        << "Total: R$ " << total << endl;

    return 0;
}

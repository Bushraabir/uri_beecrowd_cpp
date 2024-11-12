#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, tax = 0.0;


    cin >> salary;

    // Determine the tax
    if (salary <= 2000.00) {
        cout << "Isento" << endl;  // No tax for salaries up to 2000.00
    } else {
        // Calculate tax for each segment above 2000.00
        if (salary > 2000.00 && salary <= 3000.00) {
            tax += (salary - 2000.00) * 0.08;
        } else if (salary > 3000.00 && salary <= 4500.00) {
            tax += 1000.00 * 0.08;
            tax += (salary - 3000.00) * 0.18;
        } else {
            tax += 1000.00 * 0.08;
            tax += 1500.00 * 0.18;
            tax += (salary - 4500.00) * 0.28;
        }

        // Output
        cout << fixed << setprecision(2) << "R$ " << tax << endl;
    }

    return 0;
}

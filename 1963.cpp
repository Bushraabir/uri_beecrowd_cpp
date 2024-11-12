#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    double oldPrice, newPrice;

    cin >> oldPrice >> newPrice;

    // Calculate percent increase
    double percentageIncrease = ((newPrice - oldPrice) / oldPrice) * 100;


    cout << fixed << setprecision(2) << percentageIncrease << "%" << endl;

    return 0;
}


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 17 || n > 1000000000) {
        cerr << "Input out of range. n must be between 17 and 10^9." << endl;
        return 1;
    }

    // Compute the minimum and maximum bounds using the given formulas
    double P = n / log(n);
    double M = 1.25506 * (n / log(n));

    // Output the results with one decimal place
    cout << fixed << setprecision(1) << P << " " << M << endl;

    return 0;
}

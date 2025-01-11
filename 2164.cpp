
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double psi = (1 - sqrt5) / 2;


    double fibonacci = (pow(phi, n) - pow(psi, n)) / sqrt5;

    cout << fixed << setprecision(1) << fibonacci << endl;

    return 0;
}

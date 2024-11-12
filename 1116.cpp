#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n; //test case

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y; // input

        // Check if the divisor Y is zero
        if (y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            // division and output
            cout << fixed << setprecision(1) << static_cast<double>(x) / y << endl;
        }
    }

    return 0;
}

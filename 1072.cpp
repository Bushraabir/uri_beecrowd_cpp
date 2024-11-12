#include <iostream>
using namespace std;

int main() {
    int n, x;
    int in= 0, out= 0;


    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> x;

        // Check if x is within the interval [10, 20]
        if (x >= 10 && x <= 20) {
            in++;
        } else {
            out++;
        }
    }

    // Output
    cout << in<< " in" << endl;
    cout << out << " out" << endl;

    return 0;
}

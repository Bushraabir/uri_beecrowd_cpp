#include <iostream>
using namespace std;

int main() {
    int T, R1, R2;

    cin >> T; // Read the number of test cases
    while (T--) {
        cin >> R1 >> R2; // Read the radii of the two cables
        cout << (R1 + R2) << endl; // Output the smallest radius of the conduit
    }

    return 0;
}

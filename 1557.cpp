#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        // Determine the maximum width for alignment
        int max_val = pow(2, 2 * (N - 1));
        int width = to_string(max_val).length();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                // Calculate the value for the current position
                int value = pow(2, i + j);

                // Print the value with the required width, but no trailing space at the end of the row
                cout << setw(width) << value;
                if (j < N - 1) cout << " ";
            }
            cout << endl;
        }

        // Print a blank line after each array, except after the last one
        cout << endl;
    }

    return 0;
}

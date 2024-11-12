#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));

        // Set main diagonal to 2
        for (int i = 0; i < n; i++) {
            matrix[i][i] = 2;
        }

        // Set secondary diagonal to 3
        for (int i = 0; i < n; i++) {
            matrix[i][n - 1 - i] = 3;
        }

        // Calculate the inner square size
        int size = n / 3;
        int start = size;
        int end = n - size;

        // Fill inner square with 1s
        for (int i = start; i < end; i++) {
            for (int j = start; j < end; j++) {
                matrix[i][j] = 1;
            }
        }

        // Set the center element to 4
        matrix[n / 2][n / 2] = 4;

        // Print the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        }

        cout << endl; // Blank line after each test case
    }

    return 0;
}

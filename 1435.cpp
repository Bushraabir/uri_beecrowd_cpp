#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        int matrix[100][100];

        // Fill the matrix according to the pattern
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = 1 + min(min(i, j), min(N - 1 - i, N - 1 - j));
            }
        }

        // Print the matrix with the required formatting
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << setw(3) << matrix[i][j];
                if (j < N - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;  // Blank line after each matrix
    }

    return 0;
}

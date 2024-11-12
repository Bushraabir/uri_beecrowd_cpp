#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, case_number = 1;
    while (cin >> n) {
        vector<int> sequence;
        sequence.push_back(0);  // Start the sequence with 0

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                sequence.push_back(i);  // Add 'i' to the sequence 'i' times
            }
        }

        // Output the result for the case
        int sequence_size = sequence.size();
        cout << "Caso " << case_number++ << ": " << sequence_size;
        if (sequence_size == 1) {
            cout << " numero" << endl;
        } else {
            cout << " numeros" << endl;
        }

        // Print the sequence
        for (int i = 0; i < sequence_size; ++i) {
            if (i > 0) cout << " ";
            cout << sequence[i];
        }
        cout << endl << endl;  // Extra blank line after each case
    }

    return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string D, N;
    while (cin >> D >> N) {
        // Break if the input is "0 0"
        if (D == "0" && N == "0") break;

        vector<char> result;
        // Add characters that are not equal to D to the vector
        for (char c : N) {
            if (c != D[0]) {
                result.push_back(c);
            }
        }

        // Remove leading zeros
        int i = 0;
        while (i < result.size() && result[i] == '0') {
            i++;
        }

        // Output the result
        if (i == result.size()) {
            // If all characters were zeros or result is empty, output "0"
            cout << "0" << endl;
        } else {
            // Print the remaining characters from the first non-zero position
            for (int j = i; j < result.size(); j++) {
                cout << result[j];
            }
            cout << endl;
        }
    }
    return 0;
}

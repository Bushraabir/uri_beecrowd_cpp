#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Function to transform the input string into a valid integer
int transformToValidInteger(const string& s) {
    string transformed = "";

    for (char c : s) {
        if (c == 'O' || c == 'o') {
            transformed += '0';
        } else if (c == 'l') {
            transformed += '1';
        } else if (c != ',' && c != ' ') {
            transformed += c;
        }
    }

    if (transformed.empty()) {
        return -1;  // Return -1 if the string is empty (invalid input)
    }

    try {
        long long value = stoll(transformed);
        if (value > numeric_limits<int>::max() || value < 0) {
            return -1;  // Return -1 for overflow or negative numbers
        }
        return static_cast<int>(value);  // Convert to int and return
    } catch (const exception&) {
        return -1;  // Catch any exceptions and return -1 for invalid conversion
    }
}

int main() {
    string n;

    while (getline(cin, n)) {
        int result = transformToValidInteger(n);
        if (result == -1) {
            cout << "error" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}

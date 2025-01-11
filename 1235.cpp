#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n; // Number of test cases
    cin >> n;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (n--) {
        string line;
        getline(cin, line); // Read the input line

        int len = line.size();
        int half = len / 2; // Determine the middle of the string

        string left = line.substr(0, half); // Extract the left half
        string right = line.substr(half);  // Extract the right half

        reverse(left.begin(), left.end()); // Reverse the left half
        reverse(right.begin(), right.end()); // Reverse the right half

        cout << left + right << endl; // Combine and print the decoded message
    }

    return 0;
}

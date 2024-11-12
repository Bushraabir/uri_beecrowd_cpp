#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int sum = 0;
    int results_count = 0;

    while (getline(cin, line)) {
        if (line == "caw caw") {
            // Print the accumulated sum and reset for the next result
            cout << sum << endl;
            sum = 0;
            results_count++;

            // Stop after getting three results
            if (results_count == 3) {
                break;
            }
        } else {
            // Calculate the binary value of the blink pattern
            int value = 0;
            if (line[0] == '*') value += 4; // Leftmost (most significant bit)
            if (line[1] == '*') value += 2; // Middle bit
            if (line[2] == '*') value += 1; // Rightmost (least significant bit)

            // Add the calculated value to the current sum
            sum += value;
        }
    }

    return 0;
}

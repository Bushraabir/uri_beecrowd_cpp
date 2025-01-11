
#include <iostream>
#include <string>
using namespace std;

// Function to calculate the number of LEDs
int countLEDs(char digit) {

    switch (digit) {
        case '0': return 6; // 0 uses 6 LEDs
        case '1': return 2; // 1 uses 2 LEDs
        case '2': return 5; // 2 uses 5 LEDs
        case '3': return 5; // 3 uses 5 LEDs
        case '4': return 4; // 4 uses 4 LEDs
        case '5': return 5; // 5 uses 5 LEDs
        case '6': return 6; // 6 uses 6 LEDs
        case '7': return 3; // 7 uses 3 LEDs
        case '8': return 7; // 8 uses 7 LEDs
        case '9': return 6; // 9 uses 6 LEDs
        default: return 0; // Should not reach here
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string number; // Input
        cin >> number;

        int totalLEDs = 0;

        for (char digit : number) {
            totalLEDs += countLEDs(digit); // Add LEDs for the current digit
        }

        // Output
        cout << totalLEDs << " leds" << endl;
    }

    return 0;
}

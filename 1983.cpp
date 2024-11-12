#include <iostream>
#include <iomanip> // For fixed and setprecision
using namespace std;

int main() {
    int numStudents;
    cin >> numStudents;

    int regNumber, highestRegNumber = -1;
    double note, highestNote = -1.0;

    for (int i = 0; i < numStudents; i++) {
        cin >> regNumber >> note;

        // find highest note
        if (note > highestNote) {
            highestNote = note;
            highestRegNumber = regNumber;
        }
    }

    // Print result
    if (highestNote >= 8.0) {
        cout << highestRegNumber << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}

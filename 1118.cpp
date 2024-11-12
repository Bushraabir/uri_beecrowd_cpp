#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score, total;
    int valid_count;
    int choice;

    do {
        total = 0.0;
        valid_count = 0;

        // Loop to read two valid scores
        while (valid_count < 2) {
            cin >> score;

            // Validate the score to check if it is between 0 and 10
            if (score >= 0.0 && score <= 10.0) {
                total += score; // Add valid score to the total
                valid_count++; // Increase count of valid scores
            } else {
                cout << "nota invalida" << endl; // invalid score
            }
        }

        // average of the two valid scores
        cout << fixed << setprecision(2) << "media = " << (total / 2) << endl;

        // Ask if user wants a new calculation
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> choice;
        } while (choice != 1 && choice != 2); // Repeat until choice is 1 or 2

    } while (choice == 1); // Continue if  1 )

    return 0;
}

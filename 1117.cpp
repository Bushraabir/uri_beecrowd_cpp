#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score, total = 0.0;
    int valid_count = 0;

    while (valid_count < 2) {
        cin >> score; // input

        // check if it is between 0 and 10
        if (score >= 0.0 && score <= 10.0) {
            total += score; // Add valid score to the total
            valid_count++; // count of valid scores
        } else {
            cout << "nota invalida" << endl; // message for invalid score
        }
    }

    // Calculate and print the average of the two valid scores
    cout << fixed << setprecision(2) << "media = " << (total / 2) << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int month, day;

    while (cin >> month >> day) {

        int daysInMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
        int daysLeft = 0;

        if (month == 12 && day == 25) {
            cout << "E natal!" << endl;
        } else if (month == 12 && day == 24) {
            cout << "E vespera de natal!" << endl;
        } else if (month == 12 && day > 25) {
            cout << "Ja passou!" << endl;
        } else {
            // Calculate days left in the current month
            daysLeft += daysInMonth[month] - day;
            // Add days in the remaining months up to December
            for (int i = month + 1; i <= 11; i++) {
                daysLeft += daysInMonth[i];
            }
            // Finally, add the 25 days of December
            daysLeft += 25;

            cout << "Faltam " << daysLeft << " dias para o natal!" << endl;
        }
    }

    return 0;
}

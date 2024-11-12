#include <iostream>
using namespace std;

int main() {
    int numYears;
    cin >> numYears;

    for (int i = 0; i < numYears; i++) {
        int yearsPassed;
        cin >> yearsPassed;

        int eventYear = 2015 - yearsPassed; // Calculate  event year

        if (eventYear > 0) {
            cout << eventYear << " D.C." << endl;
        } else {
            cout << abs(eventYear) + 1 << " A.C." << endl;
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int startHour, startMinute, endHour, endMinute;


    cin >> startHour >> startMinute >> endHour >> endMinute;

    int durationHours, durationMinutes;

    // Calculate the minute difference
    durationMinutes = endMinute - startMinute;
    if (durationMinutes < 0) {
        // If minute difference is negative, borrow an hour and add 60 minutes
        durationMinutes += 60;
        endHour -= 1;
    }

    // Calculate the hour difference
    durationHours = endHour - startHour;
    if (durationHours < 0) {
        // If hour difference is negative, add 24 hours to make it correct
        durationHours += 24;
    }

    // if start and end times are the same
    if (startHour == endHour && startMinute == endMinute) {
        durationHours = 24;
        durationMinutes = 0;
    }

    // Output the result in the required format
    cout << "O JOGO DUROU " << durationHours << " HORA(S) E " << durationMinutes << " MINUTO(S)" << endl;

    return 0;
}

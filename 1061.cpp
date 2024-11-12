#include <iostream>
using namespace std;

int main() {

    string dayLabel;
    int startDay, endDay;
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;

    // Input
    cin >> dayLabel >> startDay;
    cin >> startHour >> dayLabel >> startMinute >> dayLabel >> startSecond;
    cin >> dayLabel >> endDay;
    cin >> endHour >> dayLabel >> endMinute >> dayLabel >> endSecond;

    // Convert start and end times to total seconds
    int startTotalSeconds = (startDay * 24 * 3600) + (startHour * 3600) + (startMinute * 60) + startSecond;
    int endTotalSeconds = (endDay * 24 * 3600) + (endHour * 3600) + (endMinute * 60) + endSecond;

    // Calculate the difference in total seconds
    int durationSeconds = endTotalSeconds - startTotalSeconds;

    // Convert into days, hours, minutes, and seconds
    int days = durationSeconds / (24 * 3600);
    durationSeconds %= (24 * 3600);

    int hours = durationSeconds / 3600;
    durationSeconds %= 3600;

    int minutes = durationSeconds / 60;
    int seconds = durationSeconds % 60;

    // Output
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}

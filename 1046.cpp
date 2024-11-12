#include <iostream>
using namespace std;

int main() {
    int start, end;

    cin >> start >> end;

    int duration;

    // If the start and end times are the same, the game lasted 24 hours
    if (start == end) {
        duration = 24;
    }
    // If the game started at an earlier time and ended later on the same day
    else if (start < end) {
        duration = end - start;
    }
    // If the game started late in the day and ended the next day
    else {
        duration = (24 - start) + end;
    }

    // Output the result with the required format
    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}

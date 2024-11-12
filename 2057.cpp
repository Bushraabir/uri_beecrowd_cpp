#include <iostream>
using namespace std;

int main() {
    int S, T, F;
    cin >> S >> T >> F;

    int arrival_time = (S + T + F) % 24;
    if (arrival_time < 0) {
        arrival_time += 24;  // Adjust for negative modulo results
    }

    cout << arrival_time << endl;
    return 0;
}

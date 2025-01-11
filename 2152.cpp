
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int H, M, O;
        cin >> H >> M >> O;

        // Print the time in HH:MM format
        cout << setw(2) << setfill('0') << H << ":"
             << setw(2) << setfill('0') << M << " - ";

        // Determine the message based on O
        if (O == 1) {
            cout << "A porta abriu!" << endl;
        } else {
            cout << "A porta fechou!" << endl;
        }
    }

    return 0;
}

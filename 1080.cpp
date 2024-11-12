#include <iostream>
using namespace std;

int main() {
    int highest = 0;
    int position = 0;


    for (int i = 1; i <= 100; i++) {
        int num;
        cin >> num;

        // Check if the current number is the highest or not
        if (num > highest) {
            highest = num;
            position = i;
        }
    }

    // Output
    cout << highest << endl;
    cout << position << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A > B && C >= B) {
        // Condition 1
        cout << ":)" << endl;
    } else if (A < B && C <= B) {
        // Condition 2
        cout << ":(" << endl;
    } else if (A < B && C > B && (C - B) < (B - A)) {
        // Condition 3
        cout << ":(" << endl;
    } else if (A < B && C > B && (C - B) >= (B - A)) {
        // Condition 4
        cout << ":)" << endl;
    } else if (A > B && C < B && (B - C) < (A - B)) {
        // Condition 5
        cout << ":)" << endl;
    } else if (A > B && C < B && (B - C) >= (A - B)) {
        // Condition 6
        cout << ":(" << endl;
    } else if (A == B && C > B) {
        // Condition 7
        cout << ":)" << endl;
    } else if (A == B && C <= B) {
        // Condition 8
        cout << ":(" << endl;
    }

    return 0;
}

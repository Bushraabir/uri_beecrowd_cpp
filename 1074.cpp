#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N;


    for (int i = 0; i < N; i++) {
        cin >> X;

        // Check for zero
        if (X == 0) {
            cout << "NULL" << endl;
        } else {
            // if X is even or odd
            if (X % 2 == 0)
                cout << "EVEN ";
            else
                cout << "ODD ";

            //  if X is positive or negative
            if (X > 0)
                cout << "POSITIVE" << endl;
            else
                cout << "NEGATIVE" << endl;
        }
    }

    return 0;
}

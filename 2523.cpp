#include <iostream>
#include <vector>
using namespace std;

int main() {
    string alphabet;
    while (cin >> alphabet) {
        int N;
        cin >> N;
        vector<int> blinkedBulbs(N);
        for (int i = 0; i < N; i++) {
            cin >> blinkedBulbs[i];
        }

        string message = "";
        for (int i = 0; i < N; i++) {
            message += alphabet[blinkedBulbs[i] - 1];
        }


        cout << message << endl;
    }
    return 0;
}


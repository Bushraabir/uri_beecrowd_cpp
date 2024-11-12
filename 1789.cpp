#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int L, speed;

    while (cin >> L) {
        vector<int> speeds(L);
        for (int i = 0; i < L; i++) {
            cin >> speeds[i];
        }

        //   maximum speed in the current test case
        int max_speed = *max_element(speeds.begin(), speeds.end());

        //   speed level based on max_speed
        if (max_speed < 10) {
            cout << 1 << endl;
        } else if (max_speed < 20) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}

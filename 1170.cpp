
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        double X;
        cin >> X;

        int days = 0;
        while (X > 1) {
            X /= 2;
            days++;
        }

        cout << days << " dias" << endl;
    }

    return 0;
}

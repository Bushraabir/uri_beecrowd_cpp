#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        float a, b, c;
        cin >> a >> b >> c;

        // calculate weighted average
        float weightedAverage = (a * 2 + b * 3 + c * 5) / 10;

        // output
        cout << fixed << setprecision(1) << weightedAverage << endl;
    }

    return 0;
}

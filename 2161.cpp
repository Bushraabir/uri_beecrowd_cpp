
#include <iostream>
#include <iomanip>
using namespace std;

double calculateSquareRootApproximation(int N) {
    double fraction = 0.0;


    for (int i = 0; i < N; ++i) {
        fraction = 1.0 / (6.0 + fraction);
    }


    return 3.0 + fraction;
}

int main() {
    int N;
    cin >> N;

    double result = calculateSquareRootApproximation(N);


    cout << fixed << setprecision(10) << result << endl;

    return 0;
}

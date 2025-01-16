#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int H, P;
    cin >> H >> P;


    double average = static_cast<double>(H) / P;
    cout << fixed << setprecision(2) << average << endl;

    return 0;
}


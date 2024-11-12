#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop to print the multiplication table
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << N << " = " << i * N << endl;
    }

    return 0;
}

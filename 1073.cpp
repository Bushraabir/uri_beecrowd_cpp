#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop through each even number from 2 up to N
    for (int i = 2; i <= N; i += 2) {
        cout << i << "^2 = " << i * i << endl;
    }

    return 0;
}

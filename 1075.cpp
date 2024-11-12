#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop through  1 to 10000
    for (int i = 1; i <= 10000; i++) {
        //remainder is 2 when i is divided by N
        if (i % N == 2) {
            cout << i << endl;
        }
    }

    return 0;
}

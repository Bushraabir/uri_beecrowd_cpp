#include <iostream>
using namespace std;

int main() {
    int tst, n;

    while (cin >> tst && tst) {
        for (int i = 1; i <= tst; i++) {
            cin >> n;


            if (n % 2 == 1) {
                cout << (n * 2 - 1) << endl;
            } else {
                cout << (n * 2 - 2) << endl;
            }
        }
    }

    return 0;
}

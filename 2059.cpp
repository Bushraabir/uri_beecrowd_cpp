
#include <iostream>
using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    int sum = j1 + j2;

    // Check if Player 1 cheated and if Player 2 accused
    if (r == 1 && a == 1) {
        cout << "Jogador 2 ganha!" << endl;
    } else if (r == 1 && a == 0) {
        cout << "Jogador 1 ganha!" << endl;
    } else {
        // Normal game rules (odd/even)
        if ((p == 1 && sum % 2 == 0) || (p == 0 && sum % 2 != 0)) {
            cout << "Jogador 1 ganha!" << endl;
        } else {
            cout << "Jogador 2 ganha!" << endl;
        }
    }

    return 0;
}

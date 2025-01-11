#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;

    // Available bills
    vector<int> bills = {2, 5, 10, 20, 50, 100};

    while (cin >> N >> M && (N != 0 || M != 0)) {
        int change = M - N;
        bool possible = false;

        // Check all pairs of bills
        for (int i = 0; i < bills.size(); ++i) {
            for (int j = i + 1; j < bills.size(); ++j) {
                if (bills[i] + bills[j] == change) {
                    possible = true;
                    break;
                }
            }
            if (possible) break;
        }

        if (possible) {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }

    return 0;
}


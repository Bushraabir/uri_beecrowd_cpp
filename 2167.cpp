#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> rpm(N);


    for (int i = 0; i < N; ++i) {
        cin >> rpm[i];
    }

    for (int i = 1; i < N; ++i) {
        if (rpm[i] < rpm[i - 1]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}


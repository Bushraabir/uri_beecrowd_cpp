#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> hits(N);
    for (int i = 0; i < N; i++) {
        cin >> hits[i];
    }

    int min_hits = hits[0];
    int min_index = 1; // 1-based index

    for (int i = 1; i < N; i++) {
        if (hits[i] < min_hits) {
            min_hits = hits[i];
            min_index = i + 1; // 1-based index
        }
    }

    cout << min_index << endl;
    return 0;
}

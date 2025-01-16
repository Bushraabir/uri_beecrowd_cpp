#include <iostream>
using namespace std;

int main() {
    int N, I;

    while (cin >> N >> I) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            int author_id, game_type;
            cin >> author_id >> game_type;

            if (author_id == I && game_type == 0) {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}


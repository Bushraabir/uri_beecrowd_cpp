#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> terrain(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> terrain[i][j];
        }
    }


    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < M - 1; j++) {
            if (terrain[i][j] == 42 &&
                terrain[i - 1][j - 1] == 7 && terrain[i - 1][j] == 7 && terrain[i - 1][j + 1] == 7 &&
                terrain[i][j - 1] == 7 && terrain[i][j + 1] == 7 &&
                terrain[i + 1][j - 1] == 7 && terrain[i + 1][j] == 7 && terrain[i + 1][j + 1] == 7) {

                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    cout << "0 0" << endl;
    return 0;
}

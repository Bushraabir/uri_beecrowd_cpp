#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string name;
        double difficulty;
        vector<double> scores(7);


        cin >> name >> difficulty;


        for (int j = 0; j < 7; ++j) {
            cin >> scores[j];
        }

        sort(scores.begin(), scores.end());

        double total_score = 0;
        for (int j = 1; j < 6; ++j) {
            total_score += scores[j];
        }

        double final_score = total_score * difficulty;


        cout << fixed << setprecision(2) << name << " " << final_score << endl;
    }

    return 0;
}


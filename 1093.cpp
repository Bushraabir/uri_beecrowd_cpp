#include <iostream>
#include <iomanip>

#include<cmath>
using namespace std;

double solve(int ev1, int ev2, int at, int d) {
    // Probabilities
    double p1_win_turn = at / 6.0;
    double p2_win_turn = 1.0 - p1_win_turn;

    //  number of turns needed
    int rounds1 = (ev1 + d - 1) / d;
    int rounds2 = (ev2 + d - 1) / d;

    //  probability n is 50%
    if (p1_win_turn == 0.5) {
        return rounds1 * 100.0 / (rounds1 + rounds2);
    }

    //  probability of winning in geometric progression
     double p1_wins = (1.0 - pow(p2_win_turn / p1_win_turn, rounds1)) /
                     (1.0 - pow(p2_win_turn / p1_win_turn, rounds1 + rounds2));

    return p1_wins * 100.0;
}

int main() {
    int ev1, ev2, at, d;

    while (cin >> ev1 >> ev2 >> at >> d) {
        // End if all 0
        if (ev1 == 0 && ev2 == 0 && at == 0 && d == 0)
            break;

        //  output
        cout << fixed << setprecision(1) << solve(ev1, ev2, at, d) << endl;
    }

    return 0;
}

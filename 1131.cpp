#include <iostream>
using namespace std;

int main() {
    int inter_goals, gremio_goals, choice;
    int inter_wins = 0, gremio_wins = 0, draws = 0, total_games = 0;

    do {
        // Input the goals
        cin >> inter_goals >> gremio_goals;

        // Update the results
        if (inter_goals > gremio_goals) {
            inter_wins++;
        } else if (gremio_goals > inter_goals) {
            gremio_wins++;
        } else {
            draws++;
        }

        // Increment the total number of games
        total_games++;


        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> choice;

    } while (choice == 1); // Continue if  1

    // Output
    cout << total_games << " grenais" << endl;
    cout << "Inter:" << inter_wins << endl;
    cout << "Gremio:" << gremio_wins << endl;
    cout << "Empates:" << draws << endl;


    if (inter_wins > gremio_wins) {
        cout << "Inter venceu mais" << endl;
    } else if (gremio_wins > inter_wins) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}

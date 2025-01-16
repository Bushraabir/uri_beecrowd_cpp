#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int B; // Bonus value
        cin >> B;

        // Dabriel's Pokémon stats
        int Ai_d, Di_d, Li_d;
        cin >> Ai_d >> Di_d >> Li_d;

        // Guarte's Pokémon stats
        int Ai_g, Di_g, Li_g;
        cin >> Ai_g >> Di_g >> Li_g;

        // Calculate Dabriel's total score
        int total_dabriel = Ai_d + Di_d;
        if (Li_d % 2 == 0) {
            total_dabriel += B; // Apply bonus if level is even
        }

        // Calculate Guarte's total score
        int total_guarte = Ai_g + Di_g;
        if (Li_g % 2 == 0) {
            total_guarte += B; // Apply bonus if level is even
        }

        // Compare results and print the winner
        if (total_dabriel > total_guarte) {
            cout << "Dabriel" << endl;
        } else if (total_dabriel < total_guarte) {
            cout << "Guarte" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }

    return 0;
}

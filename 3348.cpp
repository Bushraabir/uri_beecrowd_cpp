#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int K = 1;

    // Loop to find the smallest K that works
    while (true) {
        vector<int> spiders(2 * N + 1, 1);  // Initialize all spiders as alive (1 means alive)
        int mcounter = 0, acounter = 0;
        int pos = 0;

        // Simulate the elimination process
        while (mcounter + acounter < N) {
            int steps = 0;

            // Move K steps forward in a circular manner
            while (steps < K) {
                if (spiders[pos] == 1) steps++;  // Count only alive spiders
                if (steps == K) break;
                pos = (pos + 1) % spiders.size();
            }

            // Eliminate the spider at the current position
            spiders[pos] = 0;  // Mark spider as eliminated
            if (pos < N) {
                mcounter++;  // Increment harmless spider counter
            } else {
                acounter++;  // Increment recluse spider counter
            }

            // Move to the next position for the next elimination
            pos = (pos + 1) % spiders.size();
        }

        // Check if the elimination was valid (only recluse spiders eliminated)
        if (acounter == N && mcounter == 0) {
            cout << K << endl;  // Output the valid K
            break;
        }

        // Increment K and try again
        K++;
    }

    return 0;
}

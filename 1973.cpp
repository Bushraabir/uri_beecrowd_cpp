#include <iostream>
#include <vector>
using namespace std;

#define MAXSIZE 1000010

typedef long long unsigned llu;

bool seen[MAXSIZE];

int main() {
    int n;
    cin >> n;

    vector<unsigned> sheepCount(n);
    llu totalSheep = 0;

    // Read the initial number of sheep in each farm and calculate total sheep
    for (int i = 0; i < n; ++i) {
        cin >> sheepCount[i];
        totalSheep += sheepCount[i];
    }

    int position = 0;
    llu attackedFarms = 0;

    // Simulate the mad brother's journey
    while (position >= 0 && position < n) {
        // If the farm hasn't been attacked before, count it as attacked
        if (!seen[position]) {
            ++attackedFarms;
        }

        // Mark the farm as attacked
        seen[position] = true;

        // Check the parity of the sheep count to determine movement
        if (sheepCount[position] % 2 == 1) {
            // If odd, move to the next farm and reduce sheep by 1
            if (sheepCount[position] > 0) {
                --totalSheep;
                --sheepCount[position];
            }
            ++position;  // Move to the next farm
        } else {
            // If even, move to the previous farm and reduce sheep by 1 if available
            if (sheepCount[position] > 0) {
                --totalSheep;
                --sheepCount[position];
            }
            --position;  // Move to the previous farm
        }
    }

    // Output the results
    cout << attackedFarms << " " << totalSheep << endl;

    return 0;
}

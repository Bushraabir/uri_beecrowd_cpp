#include <iostream>
#include <vector>
#include <cmath> // For abs()
using namespace std;

int main() {
    int jumpHeight, numPipes;

    cin >> jumpHeight >> numPipes;

    vector<int> pipeHeights(numPipes);

    for (int i = 0; i < numPipes; i++) {
        cin >> pipeHeights[i];
    }

    // Check if the frog can jump or not
    for (int i = 1; i < numPipes; i++) {
        if (abs(pipeHeights[i] - pipeHeights[i - 1]) > jumpHeight) {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }

    // If the loop completes,win
    cout << "YOU WIN" << endl;

    return 0;
}
